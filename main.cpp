#include "Shader.h"
using namespace std;
void Man::creatBox(int tag2, float vertices2[],  glm::vec3 cameraPos, glm::vec3 cameraUP, glm::vec3 cameraFront, float fov, float hi, float xx, float camX, float camZ)
{
    glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 180, vertices2, GL_STATIC_DRAW);
    glm::mat4 trans2 = glm::mat4(1.0f);
    this->use();
    glm::mat4 model2 = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 view2 = glm::mat4(1.0f);
    glm::mat4 projection2 = glm::mat4(1.0f);
    //model2 = glm::translate(trans2, cubePositions[0]);
    //旋转
    if (tag2 == 1)
    {
        xx = 13.9 + xx;

    }
    if (tag2 == 2)
    {

        xx = xx - 13.9;

    }


    model2 = glm::translate(trans2, glm::vec3(cameraPos.x, hi, cameraPos.z - 4.0f));
    if (tag2 == 0)
    {
        //不按q时,随摄像头而移动位置
        view2 = glm::lookAt(glm::vec3(cameraPos.x, hi+1.2 , cameraPos.z), glm::vec3(cameraPos.x, hi+1.2 , cameraPos.z) + cameraFront, cameraUP);
    }


    else {
        //按下q时,旋转
        view2 = glm::lookAt(glm::vec3(camX + cameraPos.x, hi + 1.2, camZ + cameraPos.z - 4.0f), glm::vec3(cameraPos.x, hi, cameraPos.z - 4.0f), glm::vec3(0.0f, 1.0f, 0.0f));
        /*cameraPos.x= camX;
        cameraPos.z = camZ;*/
        /*view2 = glm::lookAt(glm::vec3(0.0, 1.2f, 4.0f), glm::vec3(0.0f, 1.2f, 4.0f) + glm::vec3(0.0f, 0.0f, -1.0f), glm::vec3(0.0f, 1.0f, 0.0f));
        *//*glm::vec3 cameraUP = glm::vec3(0.0f, 1.0f, 0.0f);
		cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);*/ /*严博出来吃饭啊?去哪吃啊,别光说吃饭啊*/
    }
    //图像旋转
    model2 = glm::rotate(model2, xx / 10020, glm::vec3(0.0f, 1.0f, 0.0f));
    //}//view2 = glm::lookAt(/*cameraPos**/kkk, kkk + cameraFront, cameraUP);
    projection2 = glm::perspective(glm::radians(fov), (float)800 / (float)600, 0.1f, 100.0f);
    trans2 = projection2 * view2*model2;
    glUniformMatrix4fv(glGetUniformLocation(this->ID, "transform"), 1, GL_FALSE, glm::value_ptr(trans2));
    glDrawArrays(GL_TRIANGLES, 0, 36);
}

/*inline void Man::xyz(glm::vec3 &cameraPos, float hi)
{

	//链表指针指向链表最后一个对象
	//对链表最后一个对象绑定纹理
	//链表加一个对象,赋值xyz
	this->tag = 1;
	this->x = cameraPos.x;
	this->y = hi;
	this->z = cameraPos.z;
}*/

void zylt(float &hi, float &tagHeight, float &t, float &hhh)
{
    if (hi - 0.1 >= tagHeight)
    {
        hi -= 0.1;
    }
    else
    {
        hi = tagHeight;
        t = glfwGetTime();
        hhh = tagHeight;
        cout << "\t高度:" << hi << "\t" << tagHeight << endl;
    }

}
void Man::Jump(int &tag3, float &hi, float &tagHeight,int &tagJump)
{
    static float t = glfwGetTime();
    //对执行函数进行计时
    //如果按下L,跳跃
    static float hhh = tagHeight;
    float h = 0.0f;
    //执行tag3=1时再次计时
    float t2 = glfwGetTime();
    //计算两次时间差值
    t2 = t2 - t;
    //cout << (t2 - t)<<"\n";
    //秒数转换,不用管,觉得快就多除
    t2 /= 1.3;
    //跳跃状态时的实时速度
    float v = 5 * t2 - 5 * t2*t2;
    //当上升的速度大于0,并且高度>=0
    if (hi >= h && v > 0)
    {
        //高度上升
        hi = (5 * t2 - 5 * t2*t2) * 2 + hhh;
    }
    //当上升的速度小于0,并且高度>=-1.2

    //zylt(hi,tagHeight,t,hhh);
    //自由落体
    //hi -= (5 * t2*t2) * 2 ;
    hi = (5 * t2 - 5 * t2*t2) * 2 + hhh;
    if (hi < tagHeight)
    {

        hi = tagHeight;
        t = glfwGetTime();
        hhh = tagHeight;
        tagJump = 0;
    }
    else
    {
        hi -= 0.03;
    }


    cout << "时间差:" << t2 << "\t高度:" << hi << "\t速度:" << v << "\t" <<tagHeight<< "\t"<<tagJump << endl;
    //如果高度小于-2.0f,把高度归为,t重新定时,标记消除
    /*else if (hi < h)
    {
        hi = h;
        t = glfwGetTime();
        tag3 = 0;
    }*/
}



//void Man::Jump(int &tag3, float &hi, float &tagHeight)
//{
//	static float t = glfwGetTime();
//	//对执行函数进行计时
//	//如果按下L,跳跃
//	float h = 0.0f;
//	//执行tag3=1时再次计时
//	float t2 = glfwGetTime();
//	//计算两次时间差值
//	t2 = t2 - t;
//	//cout << (t2 - t)<<"\n";
//	//秒数转换,不用管,觉得快就多除
//	t2 /= 1.3;
//	//跳跃状态时的实时速度
//	float v = 5 * t2 - 5 * t2*t2;
//	//当上升的速度大于0,并且高度>=h
//	if (hi >= h && v > 0)
//	{
//		//高度上升
//		hi = (5 * t2 - 5 * t2*t2) * 2 + tagHeight;
//	}
//	//当上升的速度小于0,并且高度>=-1.2
//	else if (hi >= h && v < 0)
//	{
//		//自由落体
//		zylt(hi, tagHeight);
//
//	}
//	cout << "时间差:" << t2 << "\t速度:" << v << "\t" << endl;
//	//如果高度小于-2.0f,把高度归为,t重新定时,标记消除
//	/*else if (hi < h)
//	{
//		hi = h;
//		t = glfwGetTime();
//		tag3 = 0;
//	}*/
//}
//
