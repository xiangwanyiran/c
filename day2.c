/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-11 11:03:42
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-12 10:16:47
 * @FilePath: \c\day2.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/* #include <stdio.h>


int main()
{
    char *p;
    int a_=1;
    printf("%d ",sizeof(p));
    printf("%d ",sizeof(char));
    printf("%d ",sizeof(int));
    printf("%d ",sizeof(short));
    printf("%d ",sizeof(long));
    return 0;
} */

/* #include <stdio.h>


int main()
{
    char a;
    for(a='A';a<='Z';a++)
    {
        printf("%c ",a);
    }
    return 0;
} */

//乘法表

/* #include <stdio.h>

int main()
{
    int j, k;
    for (j = 1; j <= 9; j++)
    {
        for (k = 1; k <= j; k++)
        {
            printf("%dx%d=%d  ", j, k, j * k);
        }
        printf("\n");
    }
    return 0;
} */

//回调函数

/* #include <stdio.h>

void test(int* arr,int num)
{
    *arr=num;
}


int ceshi(int* arr,int num,void(*temp)(int* arr,int num))
{
    temp(arr+num,num);
}

int main()
{
    int arr[10];
    int a,i=0;
    for(i=0;i<10;i++)
    {
        a=i;
        ceshi(arr,i,test);
    }

    for(i=0;i<10;i++)
    {
        printf("arr[%d]=%d ",i,arr[i]);
    }




    return 0;
} */

//数据溢出
/*
 #include <stdio.h>
int main()
{
    unsigned short a=65535;
    unsigned int s=0x100000000;
    char a2=156;
    printf("%d",a2);
    return 0;
}
 */

/* #include <stdio.h>

int main()
{

    return 0;
} */

/*
#include<stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str[10][50], temp[50];

    printf("输入10个单词:\n");

    for(i=0; i<10; ++i) {
        scanf("%s[^\n]",str[i]);
    }


    for(i=0; i<9; ++i) {
        for(j=i+1; j<10 ; ++j)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\n排序后: \n");
    for(i=0; i<10; ++i)
    {
        puts(str[i]);
    }

    return 0;
}
 */
#include <stdio.h>

int main()
{
    unsigned char b=100;
    int a=-20000;
    b=a;
    

    printf("%d ",b);
    return 0;
}