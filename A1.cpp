
//ctrl加鼠标左键可以进入函数
#include "construct.h"
#include "Control.h"



int main()
{
	//是否创建箱子的标记
	int tag = 0;
	//旋转角度
	float radius = 5.0f;
	//对物体坐标放大十倍,做一个地板
	for (int i = 0;i < 180;i++)
	{
		vertices[i] = vertices[i] * 10000;
	}
	//初始化,创建一个窗口,封装好了,直接用就行
	init();
	//生成一个链表指针,包含一个shader对象,一个next,一个last
	head = create_normal_list(head);
	head = create_normal_list(head);
	//生成一个链表指针,记录被取消的箱子
	head2 = create_normal_list(head2);

	//生成链表元素,函数封装好了,需要的时候直接调用,会在尾部加一个元素
	//head = create_normal_list(head);
	//绑定控制器,不需要管,mouse_callback鼠标控制函数,scroll_callback滚轮控制函数
	glfwSetCursorPosCallback(window, mouse_callback);
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	glfwSetScrollCallback(window, scroll_callback);
	//编译顶点
	wenli.VAOSet(vertices);
	wenli.VAOSet(vertices2);
	//深度优先
	glEnable(GL_DEPTH_TEST);
	//创建一个shader对象,默认构造函数需要传入两个着色器脚本路径
	Shader m_shader("vertexShader.txt", "fragmentShader.txt");
	Man man;
	//编译纹理的图片
	wenli.texture();
	//给对象贴图
	wenli.tieTu(&(m_shader), 0, 1);
	//wenli.texture(&(man), 0, 2);
	wenli.tieTu(&man, 0, 2);
	float xx = 0;
	//当窗口不被关闭,进入循环
	while (!glfwWindowShouldClose(window))
	{
		int ttt = 0;
		//tagHeight = 0;
		//xz旋转
		float camX = sin(glfwGetTime())*radius;
		float camZ = cos(glfwGetTime())*radius;
		//不用管
		init2();
		processInput(man);
		tagHeight = 0;
		for (listpoint *c = head->next;c->next != NULL;c = c->next)
		{
			c->m_shader->pengZhuang(cameraPos, tagwasd, tagwasd2,ttt,hi,tagHeight);
			if (ttt == 0)
			{
				tagwasd = 0;
				tagwasd2 = 0;
			}
		}
		if (head->next->next == NULL)
		{
			tagwasd = 0;
			tagwasd2 = 0;
		}
		//每n的平方个箱子聚集到一起
		gatherBoxes(head, 1000);
		if (head2->next != NULL)
		{
			for (listpoint *a = head2->next;a->next != NULL;a = a->next)
			{
				if (a->m_shader->tag == 1)
				{
					a->m_shader->creatBox(tag2, vertices2, glm::vec3(a->m_shader->x, a->m_shader->y + 0.5, a->m_shader->z - 4), cameraPos, cameraUP, cameraFront, fov, hi);
				}
			}
		}
		//创建地板
		m_shader.creatBox(tag2, vertices, glm::vec3(0.0f, 0.0f, 0.0f), cameraPos, cameraUP, cameraFront, fov, hi);
		//创建随摄像机动的方块
		man.creatBox(tag2, vertices2, cameraPos, cameraUP, cameraFront, fov, hi, xx, camX, camZ);
		glfwPollEvents();
		glfwSwapBuffers(window);
	}
	glfwTerminate();
	system("pause");
	return 0;
}



