/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-16 09:50:33
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-17 15:10:52
 * @FilePath: \c\order.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>

#define Initsize 5

typedef struct
{
    int length;
    int maxsize;
    int *data;
} Sqlist;

void Initlist(Sqlist &L)
{
    L.data = (int *)malloc(Initsize * sizeof(int));
    if (!L.data)
        exit(0);
    L.length = 0;
    L.maxsize = Initsize;
    printf("初始化成功\n");
}

void WriteList(Sqlist &L)
{
    printf("输入创建顺序表长度：");
    scanf("%d", &L.length);
    printf("输入放入顺序表元素：");
    int i = 0;
    for (i = 0; i < L.length; i++)
    {
        scanf("%d", &L.data[i]);
    }
}

//打印顺序表

bool printlist(Sqlist &L)
{
    if (!L.data)
        return false;
    int i;
    printf("顺序表元素为：");
    for (i = 0; i < L.length; i++)
    {
        printf("%d ", L.data[i]);
    }
    printf("\n");
    return true;
}

//增加顺序表的长度
void IncreaseSize(Sqlist &L)
{
    int newlen;
    int *p = L.data;
    printf("增加的长度：");
    scanf("%d", &newlen);
    L.data = (int *)malloc((newlen + L.maxsize) * sizeof(int));
    int i = 0;
    for (i = 0; i < L.length; i++)
        L.data[i] = p[i];
    L.maxsize += newlen;
    free(p);
}

//插入元素
bool Listinsret(Sqlist &L)
{
    int j, k;
    printf("请输入增加的元素和元素位置：");
    scanf("%d %d", &j, &k);
    if (k < 1 || k > L.length + 1)
        return false;
    if (k > L.maxsize)
        return false;
    int i = 0;
    for (i = L.length; i >= k; i--)
    {
        L.data[i] = L.data[i - 1];
    }
    L.data[k - 1] = j;
    L.length++;
    printf("插入的元素是%d 插入的位置为%d\n", j, k);
    return true;
}
//删除表中元素
bool Listdelet(Sqlist &L)
{
    int j, i;
    printf("请输入删除元素的位置：");
    scanf("%d", &j);
    if (j < 1 || j > L.length + 1)
        return false;
    if (!L.data)
        return false;
    int e = L.data[j - 1];

    for (i = j; i <= L.length; i++)
    {
        L.data[i - 1] = L.data[i];
    }
    L.length--;
    printf("删除的元素为%d ,元素地址为%d\n", e, j);
    return true;
}

bool GetElem(Sqlist &L)
{
    int num;
    printf("请输入需要查找的第几个元素：");
    scanf("%d", &num);
    if (num < 1 || num > L.length + 1)
    {
        printf("查找失败 ");
        return false;
    }

    printf("第%d个元素是%d \n", num, L.data[num - 1]);

    return true;
}

void LocatElem(Sqlist &L)
{
    int num, i;
    int count = 0;
    printf("输入要查找的元素值 ");
    scanf("%d", &num);
    for (i = 0; i < L.length; i++)
    {
        if (L.data[i] == num)
        {
            printf("找到了 元素是第%d 个\n", i + 1);
            count++;
        }
    }
    printf("该元素共有%d个\n", count);
    if (count == 0)
    {
        printf("顺序表中没有该元素\n");
    }
}

void DestroyList(Sqlist &L)
{
    L.length = 0;
    L.maxsize = 0;
    free(L.data);
    printf("顺序表已销毁\n");
}

int Listcount(Sqlist *L)
{
    return L->length;
}

int main()
{
    Sqlist L;
    Initlist(L);
    WriteList(L);
    printlist(L);
    IncreaseSize(L); //增加顺序表的长度
    printlist(L);
    Listinsret(L); //插入元素
    printlist(L);
    Listdelet(L); //删除表中相应位置的元素
    printlist(L);
    GetElem(L);   //根据元素位置求值
    LocatElem(L); //根据值求元素位置
    int ret = Listcount(&L);//求表长
    printf("表长为%d\n",ret);
    DestroyList(L); //销毁表
    return 0;
}