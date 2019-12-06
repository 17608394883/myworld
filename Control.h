#include "controlFunction.h"

//键盘输入事件




void processInput(Man man)
{
	static int tag5=0;
	//tag1为箱子标记,1为创建,2为消除
	//tag2为是否旋转标记,在wasd里
	//tag3为跳跃标记
	static int tag3 = 0;
	float cameraSpeed = 12.0f*deltaTime;


	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
	{
		if (tagwasd != 1)
		{
			tag2 = 0;
			cameraPos += cameraSpeed * cameraFront;
		}
	}
	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
	{
		if (tagwasd != 2)
		{
			tag2 = 0;
			cameraPos -= cameraSpeed * cameraFront;
		}
	}
	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
	{
		if (tagwasd2 != 3)
		{
			tag2 = 0;
			cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUP))*cameraSpeed;
		}
	}
	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
	{
		if (tagwasd2 != 4)
		{
			tag2 = 0;
			cameraPos += glm::normalize(glm::cross(cameraFront, cameraUP))*cameraSpeed;
		}
	}

	if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
	{

		tag2 = 1;

	}
	if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
	{
		tag2 = 2;

	}
	if (glfwGetKey(window, GLFW_KEY_Q) != GLFW_PRESS && glfwGetKey(window, GLFW_KEY_E) != GLFW_PRESS)
	{
		tag2 = 0;
	}

	if (glfwGetKey(window, GLFW_KEY_M) == GLFW_PRESS)
	{
		//创建箱子
		boxdisplay(tag5);
	}
	if (glfwGetKey(window, GLFW_KEY_N) == GLFW_PRESS)
	{
		//把箱子消失掉,存在另一个链表里
		xiaoShi();
	}
	//切换m键生成箱子的纹理
	if (glfwGetKey(window, GLFW_KEY_T) == GLFW_PRESS)
	{
		//切换纹理
		switchTexture(tag5);
	}
	if (glfwGetKey(window, GLFW_KEY_O) == GLFW_PRESS)
	{
		//展示head2
		head2diaplay();
	}

	if (glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS)
	{
		//随机生成箱子
		randomBox(50);
	}
	static int tagJump = 0;

	if ((glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) /*|| ((hi > tagHeight))*/)
	{
		tagJump = 1;
		//人物跳跃
	}
	if (tagJump == 1)
	{
		man.Jump(tag3, hi, tagHeight, tagJump);
	}

	if (tagJump == 0 && ((hi > tagHeight)))
	{




		fall(tagJump);

	}
}


//鼠标事件,//封装好, 基本无需更改
void mouse_callback(GLFWwindow *window, double xpose, double ypose)
{
	static float yaw = -90.0f, pitch = 0.0f, lastX = 800.0f / 2, lastY = 600.0f / 2, xoffset, yoffset;
	xoffset = (xpose - lastX)*0.1;
	yoffset = -(ypose - lastY)*0.1;
	lastX = xpose;
	lastY = ypose;
	yaw += xoffset;
	pitch += yoffset;
	glm::vec3 front;

	if (pitch > 89.0f)
		pitch = 89.0f;
	if (pitch < -89.0f)
		pitch = -89.0f;
	front.x = cos(glm::radians(yaw))*cos(glm::radians(pitch));
	/*if (tag2 == 0)
	{
		front.y = sin(glm::radians(pitch));
	}
	else
	{*/
	front.y = sin(glm::radians(pitch));
	//}
	front.z = sin(glm::radians(yaw))*cos(glm::radians(pitch));
	//cameraPos.z -= front.z / 150;
	cameraFront = glm::normalize(front);
	cameraFront2 = glm::normalize(front);

}
//滚轮事件,//封装好, 无需更改
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{

	if (fov >= 1.0f&&fov <= 300.0f)
		fov -= yoffset;
	if (fov <= 1.0f)
		fov = 1.0f;
	if (fov >= 300.0f)
		fov = 300.0f;
}















#pragma once
