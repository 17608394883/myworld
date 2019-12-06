#pragma once
#include "WenLi.h"
#include <errno.h>
//#include <afxwin.h>
//链表的头
//纹理对象
WenLi wenli;
listpoint *head = NULL;
listpoint *head2 = NULL;
GLFWwindow* window;
//是否旋转的标记,opengl中,旋转是所有物体一起转
float tagHeight = 0;
//主箱子的高度
float hi = 100.0f;
int tag5 = 0;
int tag2 = 0;
int tagwasd = 0;
int tagwasd2 = 0;
//摄像机的位置
glm::vec3 cameraPos = glm::vec3(0.0f, 0.0f, 3.0f);
//摄像机的上方
glm::vec3 cameraUP = glm::vec3(0.0f, 1.0f, 0.0f);
//摄像机看的方向
glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
//这个是随摄像机而动的物体的,opengl中,摄像机要看所有的物体,只要不写,他就是相对于摄像机不动的
glm::vec3 cameraFront2 = glm::vec3(0.0f, 0.0f, -1.0f);

//物体坐标的调用顺序
unsigned int indices[] = {
	0,1,3,
	1,2,3
};


//差值
float deltaTime = 0.0f;
//上一次时间
float lastFrame = 0.0f;
//此时的时间
float currentFrame = glfwGetTime();
//视角大小
float fov = 45.0f;



//画物体的坐标
float vertices2[] =
{
	-0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
		 0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
		 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		-0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, 0.0f,

		-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
		 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
		-0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
		-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,

		-0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
		-0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
		-0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

		 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
		 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		 0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

		-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
		 0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
		 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
		 0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
		-0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
		-0.5f, -0.5f, -0.5f,  0.0f, 1.0f,

		-0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
		 0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
		 0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
		-0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
		-0.5f,  0.5f, -0.5f,  0.0f, 1.0f
};
float vertices[]
{
	-0.5f, 0.0f, -0.5f,  0.0f, 0.0f,
		 0.5f, 0.0f, -0.5f,  1.0f, 0.0f,
		 0.5f,  0.0f, -0.5f,  1.0f, 1.0f,
		 0.5f,  0.0f, -0.5f,  1.0f, 1.0f,
		-0.5f, 0.0f, -0.5f,  0.0f, 1.0f,
		-0.5f, 0.0f, -0.5f,  0.0f, 0.0f,

		-0.5f,0.0f,  0.5f,  0.0f, 0.0f,
		 0.5f,0.0f,  0.5f,  1.0f, 0.0f,
		 0.5f,  0.0f, 0.5f,  1.0f, 1.0f,
		 0.5f,  0.0f,  0.5f,  1.0f, 1.0f,
		-0.5f,  0.0f,  0.5f,  0.0f, 1.0f,
		-0.5f, 0.0f,  0.5f,  0.0f, 0.0f,

		-0.5f, 0.0f,  0.5f,  1.0f, 0.0f,
		-0.5f,  0.0f, -0.5f,  1.0f, 1.0f,
		-0.5f, 0.0f, -0.5f,  0.0f, 1.0f,
		-0.5f, 0.0f, -0.5f,  0.0f, 1.0f,
		-0.5f, 0.0f,  0.5f,  0.0f, 0.0f,
		-0.5f,  0.0f,  0.5f,  1.0f, 0.0f,

		 0.5f, 0.0f,  0.5f,  1.0f, 0.0f,
		 0.5f,  0.0f, -0.5f,  1.0f, 1.0f,
		 0.5f, 0.0f, -0.5f,  0.0f, 1.0f,
		 0.5f, 0.0f, -0.5f,  0.0f, 1.0f,
		 0.5f, 0.0f,  0.5f,  0.0f, 0.0f,
		 0.5f,  0.0f,  0.5f,  1.0f, 0.0f,

		-0.5f, 0.0f, -0.5f,  0.0f, 1.0f,
		 0.5f, 0.0f, -0.5f,  1.0f, 1.0f,
		 0.5f, 0.0f,  0.5f,  1.0f, 0.0f,
		 0.5f, 0.0f,  0.5f,  1.0f, 0.0f,
		-0.5f, 0.0f,  0.5f,  0.0f, 0.0f,
		-0.5f, 0.0f, -0.5f,  0.0f, 1.0f,

		-0.5f,  0.0f, -0.5f,  0.0f, 1.0f,
		 0.5f, 0.0f, -0.5f,  1.0f, 1.0f,
		 0.5f, 0.0f,  0.5f,  1.0f, 0.0f,
		 0.5f, 0.0f, 0.5f,  1.0f, 0.0f,
		-0.5f,  0.0f,  0.5f,  0.0f, 0.0f,
		-0.5f,  0.0f, -0.5f,  0.0f, 1.0f
};

//封装好, 无需更改
inline void frameBuffer_size_callback(GLFWwindow* w, int width, int height)
{
	glViewport(0, 0, width, height);

}
void init()
{


	std::cout << "Hello opengl!\n";
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	window = glfwCreateWindow(800, 600, "learnOpengl", NULL, NULL);
	if (!window)
	{
		std::cout << "opengl window failed" << std::endl;
		glfwTerminate();
		return;
	}
	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window, frameBuffer_size_callback);

	/*glad:load all opengl function pointer */
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "failed to initalize glad" << std::endl;
		return;
	}
}
inline void init2()
{
	//此时的时间
	currentFrame = glfwGetTime();
	//差值=此时时间减去上一次的时间
	deltaTime = currentFrame - lastFrame;
	//上一次时间等于此时的时间
	lastFrame = currentFrame;
	//窗口背景颜色
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void gatherBoxes(listpoint * head, int num)
{
	int sumci = 0;
	//遍历整个链表,把所有显示标记tag=1的,全都显示出来
	if (head->next == NULL)
	{
		return;
	}
	for (listpoint *a = head->next;a->next != NULL;a = a->next)
	{

		if (a->m_shader->tag == 1)
		{
			//creatBox显示箱子,参数太多,等回头我再修改
			//现在的是tag2:否旋转,vertices2:构成图形的坐标,glm这个:图形在世界中的坐标,后面四个变量不用改,是摄像机位置
			a->m_shader->creatBox(tag2, vertices2, glm::vec3(a->m_shader->x, a->m_shader->y, a->m_shader->z - 4), cameraPos, cameraUP, cameraFront, fov, hi);
			//计数链表个数
			sumci++;
		}
		//如果总次数不够组成一层
		if (sumci % (num*num) == 0)
		{
			//for里循环的次数
			int forci = 0;
			//for里循环,每累计一层就把j归零
			int j = 0;
			//高度改变标记
			int high = 0;
			//int xxx = num / 2;
			//x,z的坐标改变标记
			int jia = 0;
			int jia2 = 0;
			//遍历所有链表元素
			for (listpoint *b = head->next;b->next != NULL;b = b->next)
			{
				//偶数次的时候
				//for内循环小于总次数时
				{if (forci < sumci)
				{
					//给链表赋值xyz
					b->m_shader->x = -num / 2 + jia;
					b->m_shader->y = high;
					b->m_shader->z = -num / 2 + jia2;
					//每次j+1,forci+1
					j++;
					forci++;
					//高度等于for内循环次数/num的平方,可以得到层数
					high = forci / num / num;
					//x向右偏移一位
					jia += 1;
					//若jia已经到头了
					if (jia == num)
					{
						//jia归零,jia2+1
						jia = 0;
						jia2 += 1;
						if (jia2 == num)
						{
							jia2 = 0;
						}
					}
					if (j == num * num)
					{
						j = 0;
					}
				}
				else
				{
					break;
				}
				}
			}
		}
	}
}
