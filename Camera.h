#pragma once
#ifndef  CAMERA_H
#define  CAMERA_H
#include <glad/glad.h>
#include <iostream>
#include "glfw3.h"
#include "Shader.h"
#include "stb_image.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>  //需要什么变换，就导入什么文件，具体可以去官网看
#include <glm/gtc/type_ptr.hpp>
class Camera
{

public:
	Camera()
	{
		glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
		//glm::vec3 cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
		glm::vec3 cameraUP = glm::vec3(0.0f, 1.0f, 0.0f);

		glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
	}
	glm::mat4 GetViewMatrix()
	{
		return glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUP);
	}
private:
	glm::vec3 cameraPos, cameraFront, cameraUP;

#endif // ! CAMERA_H
}