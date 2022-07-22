/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-19 10:37:07
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-21 18:28:01
 * @FilePath: \c\day8.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 *
 */
// #include <stdio.h>

// int main()
// {

//     int a = 0;
//     int arr[20];
//     printf("%p  %p\n", &a, &arr);
//     printf("%#X  %#X\n", &a, arr);
//     printf("%#X  %#X", a, arr);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float a = 88.5, b = 66.5;
//     char c = 'b', d = '#';
//     printf("a=%#p b=%#p c=%#p d=%#p\n", &a, &b, &c, &d);
//     float *p1 = &a;
//     char *p2 = &c;

//     printf("a=%#p c=%#p\n", p1, p2);
//     printf("p1=%#p p2=%#p\n", &p1,&p2);
//     printf("%d",sizeof(p1));
//     return 0;

// }

// #include <stdio.h>

// int main()
// {
//     int a=0;
//     int *p=&a;
//     printf("%d\n",*&a);
//     printf("%p\n",&*p);
//     printf("%p",&a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a,b;
//     printf("输入a b的值 ");
//     scanf("%d %d",&a,&b);
//     int *p1=&a,*p2=&b;
//     int tmp=*p1;
//     *p1=*p2;
//     *p2=tmp;
//     printf("a=%d b=%d \n",a,b);
//     return 0;
// }

// char str1, str2;      //定义两个字符型变量
// int a, b;             //定义两个整型变量
// char *p1 = &str1, *p2;//定义两个个字符型指针变量，其中p1指向str1的地址
// int *p3, *p4 = &b;   //定义两个整型指针变量，其中p4指向b的地址

// p2 = str2;           //语法错误，应先取str2地址，在让p2指向str2地址
// str1 = 'B';         //把字符'B'赋值给str1
// *p2 = *p1;          //将p1解引用后存放到p2所指向的内存中

// p3 = &a;        //让p3指向变量a的地址
// *p3 = 99;        //将99存放到p3所指向的内存中
// *p4 = 100;      //将100存放到p4所指向的内存中

// str1, str2, *p1, *p2的值为多少
// str1='B'  str2='B'    *p1='B'    *p2='B'
// a, b, *p3, *p4的值为多少
// a=99   b=100   *p3=99   *p4=100

// #include <stdio.h>

// int main()
// {
//     char str1, str2;
//     int a, b;
//     char *p1 = &str1, *p2;
//     int *p3, *p4 = &b;

//     // p2 = str2;
//     str1 = 'B';
//     // *p2 = *p1;

//     p3 = &a;
//     *p3 = 99;
//     *p4 = 100;
//     printf("str1=%c  str2=%c  *p1=%c  *p2=%c\n",str1,str2,*p1,*p2);
//     printf("a=%d  b=%d  *p3=%d  *p4=%d\n",a,b,*p3,*p4);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char str1[30];
    char str2[30];
    printf("输入第一个字符串");
    scanf("%[^\n]", str1);
    while (getchar() != '\n');
        printf("输入要插入的字符串");
    scanf("%[^\n]", str2);
    while (getchar() != '\n');
         printf("输入要插入的位置");
    scanf("%d", &a);
    int sz1 = strlen(str1);
    int sz2 = strlen(str2);
    if(sz1+sz2>30)
    {
        printf("溢出\n");
        return 0;
    }

    for (int i = a-1, k=0; k < sz2;i++,k++)
    {
        str1[i+sz2]=str1[i];
        str1[i]=str2[k];
    }

    printf("%s", str1);
   
    return 0;
}

// #include <stdio.h>

// int main()
// {

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr[]="abccdd";
//     printf("%d",strlen(&arr+1));
//     return 0;
// }

