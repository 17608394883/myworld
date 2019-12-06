#pragma once
//初始化窗口,封装好,无需更改
#include "MainFun.h"
void head2diaplay()
{
	static float time2 = 1;
	/*time2 += 1;
	if (time2 >= 50)
	{
		time2 = 1;
		{*/
			if (head2->next != NULL)
			{
				for (listpoint *a = head2->next;a->next != NULL;a = a->next)
				{
					if (a->m_shader->tag == 0)
					{
						//wenli.texture((a->m_shader), b, 0, 0);
						a->m_shader->xyz(cameraPos, hi);
						a->m_shader->creatBox(tag2, vertices2, glm::vec3(a->m_shader->x, a->m_shader->y + 0.5, a->m_shader->z - 4), cameraPos, cameraUP, cameraFront, fov, hi);
						break;
					}
				}
			}
		/*}
	}*/
}
void boxdisplay(int tag5)
{
	static int i = 0;
	//设置延迟
	/*static float time = 1;
	time += 1;
	if (time >= 50)
	{
		time = 1;*/
		listpoint *a = head->last;
		//对链表最后一个对象绑定纹理
		//wenli.texture((a->m_shader), tag5, tag5);
		wenli.tieTu((a->m_shader), tag5, tag5);
		//若链表只有两个(最初创建时是创建两个)
		classification(head, a, tag5);
		a->m_shader->xyz(cameraPos, hi);
		head = create_normal_list(head);
		//链表加一个
		head->last->next = NULL;
		int ii = 0;
		for (listpoint *c = head;(c->next != NULL);c = c->next)
		{
			ii++;
			cout << c->m_shader->tag5;
		}
		cout << "\n" << "总共" << ii << ",结束" << endl;

}

void boxdisplay2(int x,int z,int tag5)
{
	static int i = 0;
		listpoint *a = head->last;
		//对链表最后一个对象绑定纹理
		//wenli.texture((a->m_shader), tag5, tag5);
		wenli.tieTu((a->m_shader), tag5, tag5);
		if (head->last->pro->pro == NULL)
		{
			head->colorLast = tag5;
			a->colorLast = tag5;
		}
		else
		{
			if(tag5==a->pro->colorLast)
			{

				a->colorLast = tag5;
				a->pro = a->pro->pro;
				a->next = a->pro->next;
				a->pro->next = a;
				a->next->pro = a;
			}
			else
			{

			}
		}
		a->m_shader->tag = 1;
		a->m_shader->x = x;
		a->m_shader -> y = 0;
		a->m_shader->z = z;
		head = create_normal_list(head);
		i++;
		cout << i<<"\n";
}

void xiaoShi()
{
	for (listpoint *cc = head->next;cc->next != NULL;cc = cc->next)
	{
		if ((abs(cameraPos.x - cc->m_shader->x) <= 1) && (abs(cameraPos.z - cc->m_shader->z) <= 1) && (cc->m_shader->tag == 1))
		{

			tagwasd = 1;
			listpoint* b = head2->last;
			listpoint* a = cc;
			a->m_shader->tag = 0;
			if (a->z == a)
			{
				for (listpoint *d = a;d->pro->z == a;d = d->pro)
				{
					d->z = a->pro;
				}
			}

			cc = a->pro;
			a->pro->next = a->next;
			a->next->pro = a->pro;

			a->pro = b;
			a->next = NULL;


			b->next = a;
			b = a;
			head2->last = b;
			a->z = NULL;
			a->last = NULL;
			classification(head2, b, b->m_shader->tag5);
			head2->last->next = NULL;
			int ii = 0;
			for (listpoint *c = head2;(c->next != NULL);c = c->next)
			{
				ii++;
				cout << c->m_shader->tag5;
			}
			cout << "\n" << "总共" << ii << ",结束" << endl;

		}
	}
}
void randomBox(int num)
{
	//随机生成num个箱子
	srand((int)time(0));
	for (int i = 0;i < num;i++)
	{
		if (i % 2 == 0)
		{
			boxdisplay2(rand() % 200, rand() % 200, rand() % 5);
		}
		else
		{
			boxdisplay2(-rand() % 200, -rand() % 200, rand() % 5);
		}
	}
}

void switchTexture(int &tag5)
{
	//设置延迟
	static float time = 1;
	time += 1;
	/*float a = glfwGetTime();
	time = a - time;*/
	if (time >= 10)
	{
		tag5++;
		if (tag5 > 5)
		{
			tag5 = 0;
		}
		time = 1;
	}
}
void fall(int tagJump)
{
	static float v = 0;
	if (0.015 + v <= 0.1)
	{
		hi -= 0.025 + v;
		v += 0.0001;
	}
	else
	{
		hi -= 0.1;
	}

	if (hi <= tagHeight)
	{

		hi = tagHeight;
		tagJump = 0;
		v = 0;

	}
	cout << "\t高度:" << hi << "\t" << tagHeight << "\t速度" << v + 0.005 << endl;
}
