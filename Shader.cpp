#include "Shader.h"





Shader::Shader(const GLchar * vertexPath, const GLchar * fragmentPath)
{

    std::string vertexCode;
    std::string fragmentCode;

    std::ifstream vShaderFile;
    std::ifstream fShaderFile;

    vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try {

        vShaderFile.open("vertexShader.txt");
        fShaderFile.open("fragmentShader.txt");

        std::stringstream vShaderStream, fShaderStream;

        vShaderStream << vShaderFile.rdbuf();
        fShaderStream << fShaderFile.rdbuf();

        vShaderFile.close();
        fShaderFile.close();

        vertexCode = vShaderStream.str();
        fragmentCode = fShaderStream.str();

    }
    catch (std::ifstream::failure e)
    {
        std::cerr << "Failed read file" << std::endl;
    }

    const char* vShaderCode = vertexCode.c_str();
    const char* fShaderCode = fragmentCode.c_str();

    unsigned int vertex, fragment;
    glfwInit();
    vertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex, 1, &vShaderCode, NULL);
    glCompileShader(vertex);
    checkComplileError(vertex, "VERTEX");

    fragment = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment, 1, &fShaderCode, NULL);
    glCompileShader(fragment);
    checkComplileError(fragment, "FRAGMENT");

    ID = glCreateProgram();
    glAttachShader(ID, vertex);
    glAttachShader(ID, fragment);
    glLinkProgram(ID);
    checkComplileError(ID, "PROGRAM");

    glDeleteShader(vertex);
    glDeleteShader(fragment);

}
void Shader::creatBox(int tag2, float vertices2[], glm::vec3 cubePositions, glm::vec3 cameraPos, glm::vec3 cameraUP, glm::vec3 cameraFront, float fov, float hi)
{
    float radius = 5.0f;
    float camX = sin(glfwGetTime())*radius;
    float camZ = cos(glfwGetTime())*radius;
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 180, vertices2, GL_STATIC_DRAW);
    glm::mat4 trans = glm::mat4(1.0f);
    this->use();
    glm::mat4 model = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 view = glm::mat4(1.0f);
    glm::mat4 projection = glm::mat4(1.0f);
    model = glm::translate(trans, cubePositions);
    //model = glm::rotate(model, float((glfwGetTime())/i), glm::vec3(1.0f, 2.0f, 1.0f));
    if (tag2 == 0)
    {
        view = glm::lookAt(glm::vec3(cameraPos.x, hi + 1.2f, cameraPos.z), glm::vec3(cameraPos.x, hi + 1.2f, cameraPos.z) + cameraFront, cameraUP);
    }
    if (tag2 == 1)
    {
        view = glm::lookAt(glm::vec3(camX + cameraPos.x, hi + 1.2, camZ + cameraPos.z - 4.0f), glm::vec3(cameraPos.x, hi, cameraPos.z - 4.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    }
    //view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f));
    projection = glm::perspective(glm::radians(fov), (float)800 / (float)600, 0.1f, 100.0f);
    trans = projection * view*model;
    glUniformMatrix4fv(glGetUniformLocation(this->ID, "transform"), 1, GL_FALSE, glm::value_ptr(trans));
    glDrawArrays(GL_TRIANGLES, 0, 36);
    this->tag = 1;
}

Shader::~Shader()
{
}

void Shader::use()
{
    glUseProgram(ID);
}

void Shader::checkComplileError(unsigned int shader, std::string type)
{
    int success;
    char infoLog[1024];

    if (type != "PROGRAM")
    {
        glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
        if (!success)
        {
            glGetShaderInfoLog(shader, 1024, NULL, infoLog);
            std::cerr << "Failed to complie shader:" << infoLog << std::endl;
        }
    }
    else
    {
        glGetProgramiv(shader, GL_LINK_STATUS, &success);
        if (!success)
        {
            glGetProgramInfoLog(shader, 1024, NULL, infoLog);
            std::cout << "Failed to link shader:" << infoLog << std::endl;
        }
    }
}

void Shader::pengZhuang(glm::vec3 cameraPos, int & tagwasd, int & tagwasd2, int & ttt, float &hi, float &tagHeight)
{
    if ((abs(cameraPos.x - this->x) <= 1) && (abs(cameraPos.z - this->z) <= 1) && (this->tag == 1))
    {
        if (tagHeight < this->y + 1)
        {
            tagHeight = this->y + 1;
        }
        if ((abs(hi - this->y) <= 0.97)&& (abs(hi - this->y) >= 0))
        {
            if ((hi - this->y >= 0.8) && (hi - this->y <= 0.97))
            {
                hi = this->y + 1;
            }


            if ((abs(cameraPos.x - this->x) < (abs(cameraPos.z - this->z))))
            {
                if (cameraPos.z - this->z < 0)
                {
                    tagwasd = 2;
                    ttt++;
                }
                else
                {
                    tagwasd = 1;
                    ttt++;
                }
            }
            else
            {
                if (cameraPos.x - this->x < 0)
                {
                    tagwasd2 = 4;
                    ttt++;
                }
                else
                {
                    tagwasd2 = 3;
                    ttt++;
                }
            }
            //tagwasd = 1;
            //break;
        }
    }
}
void Shader::xyz(glm::vec3 cameraPos, float hi)
{

    //链表指针指向链表最后一个对象
    //对链表最后一个对象绑定纹理
    //链表加一个对象,赋值xyz
    this->tag = 1;
    this->x = cameraPos.x;
    this->y = hi;
    this->z = cameraPos.z - 1.5;
}
