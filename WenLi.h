
#include "Shader.h"
#include "stb_image.h"
//纹理,在物体上绑定纹理,这里的基本不用管,我已经封装好了,知道干啥的就行了
class WenLi
{
public:
    WenLi() {};
    ~WenLi() {};


    //绑定纹理
    void texture()
    {
        int width, height, nrChannels;
        unsigned char * data;


        //翻转图片
        stbi_set_flip_vertically_on_load(true);
        unsigned int texture[6];
        glGenTextures(6, texture);
        //加载第一个纹理
        glBindTexture(GL_TEXTURE_2D, texture[0]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        data = stbi_load("wall.jpg", &width, &height, &nrChannels, 0);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
        stbi_image_free(data);


        //第二个纹理
        glBindTexture(GL_TEXTURE_2D, texture[1]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        data = stbi_load("cao.jpg", &width, &height, &nrChannels, 0);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
        stbi_image_free(data);

        //第三个纹理
        glBindTexture(GL_TEXTURE_2D, texture[2]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        data = stbi_load("small.jpg", &width, &height, &nrChannels, 0);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
        stbi_image_free(data);

        //第四个纹理
        glBindTexture(GL_TEXTURE_2D, texture[3]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        data = stbi_load("wl1.jpg", &width, &height, &nrChannels, 0);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
        stbi_image_free(data);

        //第五个纹理
        glBindTexture(GL_TEXTURE_2D, texture[4]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        data = stbi_load("hai.jpg", &width, &height, &nrChannels, 0);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
        stbi_image_free(data);

        //第六个纹理
        glBindTexture(GL_TEXTURE_2D, texture[5]);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        data = stbi_load("tie.jpg", &width, &height, &nrChannels, 0);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
        stbi_image_free(data);


        /*m_shader->use();
        glUniform1i(glGetUniformLocation(m_shader->ID, "ourTexCorrd1"), one);
        glUniform1i(glGetUniformLocation(m_shader->ID, "ourTexCorrd2"), two);*/
        //glUniform1i(glGetUniformLocation(m_shader.ID, "ourTexCorrd3"), 2);
        glActiveTexture(GL_TEXTURE0);//先激活在绑定,纹理单元0
        glBindTexture(GL_TEXTURE_2D, texture[0]);
        glActiveTexture(GL_TEXTURE1);//先激活在绑定,纹理单元1,第一个默认激活,多个的就要手动激活
        glBindTexture(GL_TEXTURE_2D, texture[1]);
        glActiveTexture(GL_TEXTURE2);//先激活在绑定,纹理单元1,第一个默认激活,多个的就要手动激活
        glBindTexture(GL_TEXTURE_2D, texture[2]);
        glActiveTexture(GL_TEXTURE3);//先激活在绑定,纹理单元1,第一个默认激活,多个的就要手动激活
        glBindTexture(GL_TEXTURE_2D, texture[3]);
        glActiveTexture(GL_TEXTURE4);//先激活在绑定,纹理单元1,第一个默认激活,多个的就要手动激活
        glBindTexture(GL_TEXTURE_2D, texture[4]);
        glActiveTexture(GL_TEXTURE5);//先激活在绑定,纹理单元1,第一个默认激活,多个的就要手动激活
        glBindTexture(GL_TEXTURE_2D, texture[5]);

    }
    void tieTu(Shader *m_shader, int one, int two)
    {
        m_shader->use();
        glUniform1i(glGetUniformLocation(m_shader->ID, "ourTexCorrd1"), one);
        glUniform1i(glGetUniformLocation(m_shader->ID, "ourTexCorrd2"), two);
        m_shader->tag5 = one;
    }

    //设置VAO,VBO,EBO
    void VAOSet(float vertices[])
    {
        unsigned int indices[] = {
                0,1,3,
                1,2,3
        };
        unsigned int VBO, VAO, EBO;
        //创建vertex array 绑定设置 vertex buffer 配置 verter 属性
        glGenVertexArrays(1, &VAO);
        glGenBuffers(1, &VBO);
        glGenBuffers(1, &EBO);
        glBindVertexArray(VAO);
        glBindBuffer(GL_ARRAY_BUFFER, VBO);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);


        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);


        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);


    }
};

