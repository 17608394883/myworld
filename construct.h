#include<cstdlib>
#include"Shader.h"
#include <ctime>
//链表结构体
using namespace std;
typedef struct data1
{
    Shader m_shader;
}data1;

typedef struct listpoint
{
    Shader *m_shader;
    listpoint *next;
    listpoint *last;
    listpoint *pro;
    int colorLast;
    listpoint *z;
}listpoint;


listpoint *create_normal_list(listpoint *a)     /*链表每一个节点都是指向  listpoint结构的指针，所以返回值是listpoint *,n是指创建的链表的节点数目*/
{
    listpoint *head, *normal, *end;/*创建头节点，其他节点，和尾节点*/
    head = a;

    if (head == NULL)
    {
        end =NULL;
        head = new(listpoint);
        head->m_shader = new(Shader)("vertexShader.txt", "fragmentShader.txt");
        /*分配内存*/
        end = head;/*最开始最后一个节点就是头节点，注意因为通过指针可以直接对地址上的东西进行操作，此时end和head指向同一个地址，对end所指向地址进行操作，等同于对head地址所做的操作*/
        head->pro = NULL;
    }
    else
    {
        end = a->last;
        normal = new(listpoint);
        normal->m_shader = new(Shader)("vertexShader.txt", "fragmentShader.txt");
        /*给新节点分配内存*/

        /* 往新节点存入数据，注意我们只给后面的节点存入数据，head不存数据*/
        end->next = normal;/*往end后增添新节点*/
        normal->pro = end;
        normal->last = end;/*新节点的上一个节点就是end*/
        end = normal;/*最后一个节点变成新节点*/
    }
    end->next = NULL;/*链表的最后指向一个新地址*/
    head->last = end;/*链表最开始的节点没有上一个节点*/
    end->colorLast = 999;
    head->last->m_shader->tag = 3;
    end->z = NULL;
    return head;
}
//对新加入的元素按纹理进行分类,如果前面分好类了,就把他加入到相应的纹理里
void classification(listpoint * head, listpoint * a, int tag5)
{
    if (head->last->pro->pro == NULL)
    {
        //链表的头纹理值变量存为tag5(只是存在对象里,用作以后查找用)
        head->colorLast = tag5;
        //新加的节点纹理也为tag5
        a->colorLast = tag5;
        //->z代表指向同一个纹理的最后一个
        head->z = a;
    }
    else
    {
        //若链表长度不为两个
        //一个标记,标记是否执行了下面for循环的操作
        int tag = 0;
        //遍历所有相同纹理的第一个量
        for (listpoint *c = head;(c->z != NULL) && (c->z->next != NULL);c = c->z->next)
        {
            //找跟最新的纹理值同类的变量开头
            if (tag5 == c->colorLast)
            {
                //找到了的话,设置标记为1
                tag = 1;
                //如果是最后一组且为一个
                if (c->z->next->next == NULL)
                {
                    //设纹理值
                    a->colorLast = tag5;
                    //把最后一个插入到倒数第二个前面
                    a->pro = c->z->pro;
                    a->next = c->z;
                    c->z->pro->next = a;
                    c->z->pro = a;
                    c->z->next = NULL;
                    //更新链表的尾部
                    head->last = c->z;
                    //更新a的z(指向同一纹理的尾部)
                    a->z = a->next;
                    a->next->next = NULL;
                    break;
                }
                else
                {
                    //不是最后一组,或者是最后一组不为两个
                    head->last = a->pro;
                    //在同类的最后一个插入到倒数第二个前面
                    a->colorLast = tag5;
                    a->pro = c->z->pro;
                    a->next = c->z;
                    c->z->pro->next = a;
                    c->z->pro = a;
                    a->z = a->next;
                    break;
                }
            }
        }
        //如果是一个全新的纹理
        if (tag == 0)
        {
            //同纹理的最后一个指向自己
            head->last->z = head->last;
            //纹理标记为最新的
            head->last->colorLast = tag5;
        }
    }
    //更新xyz
}





