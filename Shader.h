#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
//#include <afxwin.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>  //需要什么变换，就导入什么文件，具体可以去官网看
#include <glm/gtc/type_ptr.hpp>

//我把着色器跟物体对象写在一个类里了,因为一个对象必须绑定一个着色器


class Shader
{
public:
    //物体的坐标
    float x=-99999, y, z;
    //是否显示
    int tag = 0;
    //方块的纹理
    int tag5 = 0;
    glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
    //摄像机的上方
    glm::vec3 cameraUP = glm::vec3(0.0f, 1.0f, 0.0f);
    //摄像机看的方向
    glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
    //glm::vec3 kkk = glm::vec3(0.0f, 1.2f, 4.0f);

    //着色器对象的id,需要绑定着色器
    unsigned int ID;
    ////创建一个shader对象,默认构造函数需要传入两个着色器脚本路径
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
    ~Shader();
    //使用着色器


    void use();
    //创建箱子(也可以叫显示箱子,只要不执行,就没了)
    void creatBox(int tag2, float vertices2[], glm::vec3 cubePositions, glm::vec3 cameraPos, glm::vec3 cameraUP, glm::vec3 cameraFront, float fov,float hi);
    //碰撞检测
    void pengZhuang(glm::vec3 cameraPos, int & tagwasd, int & tagwasd2, int & ttt, float &hi, float &tagHeight);
    //赋值xyz
    void xyz(glm::vec3 cameraPos, float hi);
private:
    //检查错误,不用管
    void checkComplileError(unsigned int shader, std::string type);
};

class Man : public Shader
{
public:
    Man() :Shader("vertexShader.txt", "fragmentShader.txt") {};
    //创建随屏幕走的箱子
    void creatBox(int tag2,float vertices2[],glm::vec3 cameraPos, glm::vec3 cameraUP, glm::vec3 cameraFront, float fov, float hi, float xx, float camX, float camZ);
    //赋值xyz
    inline void xyz(glm::vec3 &cameraPos, float hi);
    //跳跃
    void Jump(int &tag3, float &hi, float &taghi, int &tagJump);


};
