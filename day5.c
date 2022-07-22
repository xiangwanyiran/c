/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-14 09:48:07
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-15 14:33:37
 * @FilePath: \c\day5.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/* #include <stdio.h>

int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", a * b);
        break;
    case 4:
        printf("%d", a / b);
        break;
    case 5:
        printf("%d", a % b);
        break;
    }
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int i=2, j=5, k=8, n;


    for(n=1; n<=4; n++)
    {
        switch(n)
        {
            case 4:
                j++;
                k = i+2;
            case 1:
                i = i+2;
                break;
            case 2:
                k++;
                i++;
                break;
            case 3:
                k = i+j;
                i = j-i;
            default:
                k++;
                break;

        }
    }

    printf("%d %d %d ",i,j,k);
    getchar();
} */

/* #include <stdio.h>
int main()
{
    int year, mon, day, a, i;
    int flage;
    printf("计算该日是这年的第几天：");
    printf("请输入年月日：");
    scanf("%d %d %d", &year, &mon, &day);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        flage = 1; //闰年

    else
        flage = 0; //平年

    switch (flage)
    {
    case 1:
        a = day;
        if (mon > 1)
        {
            for (i = mon - 1; i > 0; i--)
            {

                if (mon > 7)
                {
                    if (mon % 2 == 1)
                        a += 30;
                    else
                        a += 31;
                }
                else
                {
                    if (mon % 2 == 1)
                        a += 31;
                    else
                        a += 30;
                }
            }
            a = a - 1;
        }
        else
            a = day;
        break;
    case 0:
        a = day;
        if (mon > 1)
        {
            for (i = mon - 1; i > 0; i--)
            {

                if (mon > 7)
                {
                    if (mon % 2 == 1)
                        a += 30;
                    else
                        a += 31;
                }
                else
                {
                    if (mon % 2 == 1)
                        a += 31;
                    else
                        a += 30;
                }
            }
            a = a - 2;
        }
        else
            a = day;
    default:
        break;
    }
    printf("%d", a);
    return 0;
} */

/* #include <stdio.h>

int main()
{
    char a, b;
    scanf("%c", &a);
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
    {
        if (a >='a')
            b = 'z' - a + 1;
        else
        {
            b = 'Z' - a + 1;
        }
        printf("剩下%d个\n", b - 1);
        while (b--)
        {
            printf("%c ", a);
            a += 1;
        }
    }
    else
    {
        printf("不是字母");
    }

    return 0;
} */

/* #include <stdio.h>

int main()
{
    int a=100;
    int b=0;
    do
    {
       b+=a;
    } while (a--);
    printf("%d",b);

    return 0;
} */

// #include <stdio.h>
// int main()
// {
//     int year, mon, day, a, i;
//     int flage;
//     printf("计算该日是这年的第几天：");
//     printf("请输入年月日：");
//     scanf("%d %d %d", &year, &mon, &day);

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//         flage = 1; //闰年

//     else
//         flage = 0; //平年

//     switch (flage)
//     {
//     case 1:
//         a = day;
//         if (mon > 1)
//         {
//             for (i = mon - 1; i > 0; i--)
//             {
//                 /* code */

//                 if (i > 7)
//                 {
//                     if (i % 2 == 1)
//                         a += 31;
//                     else
//                         a += 30;
//                 }
//                 else
//                 {
//                     if (i % 2 == 1)
//                         a += 30;
//                     else
//                         a += 31;
//                 }
//             }
//             a = a - 1;
//         }
//         else
//             a = day;
//         break;
//     case 0:
//         a = day;
//         if (mon > 1)
//         {
//             for (i = mon - 1; i > 0; i--)
//             {
//                 /* code */

//                 if (i > 7)
//                 {
//                     if (i % 2 == 1)
//                         a += 30;
//                     else
//                         a += 31;
//                 }
//                 else
//                 {
//                     if (i % 2 == 1)
//                         a += 31;
//                     else
//                         a += 30;
//                 }
//             }
//             a = a - 2;
//         }
//         else
//             a = day;
//     default:
//         break;
//     }
//     printf("%d", a);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int year, mon, day, a = 0, i;
//     int flage;
//     printf("计算该日是这年的第几天：");
//     printf("请输入年月日：");
//     scanf("%d %d %d", &year, &mon, &day);

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//         flage = 1; //闰年

//     else
//         flage = 0;

//     switch (flage)
//     {
//     case 1:
//         a = day;
//         if (mon > 1)
//         {
//             for (i = mon - 1; i > 0; i--)
//             {

//                 if (i > 7)
//                 {
//                     if (i % 2 == 1)
//                         a += 30;
//                     else
//                         a += 31;
//                 }
//                 else
//                 {
//                     if (i % 2 == 1)
//                         a += 31;
//                     else
//                         a += 30;
//                 }
//             }
//             a = a - 1;
//         }
//         else
//             a = day;
//         break;
//     case 0:
//         a = day;
//         if (mon > 1)
//         {
//             for (i = i - 1; i > 0; i--)
//             {
//                 /* code */

//                 if (i > 7)
//                 {
//                     if (i % 2 == 1)
//                         a += 30;
//                     else
//                         a += 31;
//                 }
//                 else
//                 {
//                     if (i % 2 == 1)
//                         a += 31;
//                     else
//                         a += 30;
//                 }
//             }
//             a = a - 2;
//         }
//         else
//             a = day;
//     default:
//         break;
//     }
//     printf("%d", a);
//     return 0;
// }

/* #include <stdio.h>

int main()
{
    int m, n, i;
    printf("输入：");
    scanf("%d %d", &m, &n);
    for (i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
} */

/* #include <stdio.h>

int main()
{
    int i,k;
    for(i=1;i<=9;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("%dx%d=%d ",i,k,i*k);
        }
        printf("\n");
    }
    return 0;
} */

#include <stdio.h>

int play(int a)
{
    int k;
    for(k=2;k<a;k++)
    {
        if(a%k==0)
        return 0;
    }
    return 1;
}

int main()
{
    int n,a;
    printf("输入");
    scanf("%d",&n);
    for(a=2;a<n;a++)
    {
        if(play(a)==1)
        {
            printf("%d ",a);
        }
    }
    return 0;
}
