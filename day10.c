/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-21 09:42:44
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-22 10:18:37
 * @FilePath: \c\day10.c
 * @Description: ����Ĭ������,������`customMade`, ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// #include <stdio.h>

// int main()
// {
//     char arr[3][5] = {"abcd", "hi", "dsd"};
//     printf("%c",*(*(arr+1)));
//     return 0;
// }

// #include <stdio.h>

// int add(int x, int y)
// {
//     return x + y;
// }

// int sub(int x, int y)
// {
//     return x - y;
// }

// int mul(int x, int y)
// {
//     return x * y;
// }

// int div(int x, int y)
// {
//     return x / y;
// }

// void menu()
// {
//     printf("1��add    2��sub\n");
//     printf("3��mul    4��div\n");
//     printf("    0��exit\n");
// }

// int main()
// {
//     int i = 0;
//     int x, y;
//     int (*pfarr[])(int x, int y) = {0, add, sub, mul, div};
//     do
//     {
//         menu();
//         scanf("%d", &i);

//         if (i >= 1 && i <= 4)
//         {
//             printf("������\n");
//             scanf("%d %d", &x, &y);
//             printf("%d\n", pfarr[i](x, y));
//         }

//         else if (i == 0)
//         {
//             printf("exit\n");
//         }
//         else
//         {
//             printf("err\n");
//         }
//     } while (i);

//     return 0;
// }

// #include <stdio.h>

// long run(int n)
// {
//     if (n <= 1)
//         return 1;
//     else
//         return n * run(n - 1);
// }

// long add(int k)
// {
//     if(k<=1)
//     return 1;
//     else
//     return run(k)+add(k-1);

// }

// int main()
// {
//     int i;
//     scanf("%d", &i);
//     printf("�׳�=%d\n", run(i));
//     printf("add=%d", add(i));
//     return 0;
// }

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     printf("%d\n", argc);
//     printf("%s\n", *argv);
//     printf("%s\n", *(argv + 1));
//     printf("%s", *(argv + 2));
// }

// #include <stdio.h>
// #include <string.h>

// int foo(char str[])
// {
//     int num = 0;
//     int count = 0;
//     int sz = strlen(str);
//     if (*str - 45 == 0)
//     {
//         char *p=str+1;
//         for (int i = sz-1; i > 0; i--)
//         {
//             num = ((*p++) - 48);
//             for (int k = 0; k < i - 1; k++)
//             {
//                 num *= 10;
//             }
//             count += num;
//         }
//         count=0-count;
//         return count;
//     }

//     for (int i = sz; i > 0; i--)
//     {
//         num = ((*str++) - 48);
//         for (int k = 0; k < i - 1; k++)
//         {
//             num *= 10;
//         }
//         count += num;
//         // printf("%d ",num);
//     }
//     return count;
// }

// int main()
// {
//     char str[10];
//     printf("��������");
//     scanf("%s", str);
//     // foo(str);
//     printf("%d", foo(str));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void foo(char* arr, char a)
// {
// 	int sz = strlen(arr);
// 	int k = 0;
// 	for (int i = 0; i < sz; i++)
// 	{
// 		if (arr[i] == a)
// 		{
// 			for ( k = i; k < sz; k++)
// 			{
// 				arr[k] = arr[k+1];

// 			}
// 			sz--;
// 			i --;
// 		}

// 	}
// }
// int main()
// {
// 	int a;
// 	char str[30] = { 0 };
// 	printf("�����ַ�����");
// 	scanf("%[^\n]", str);
// 	while (getchar() != '\n');

// 	printf("����Ҫɾ�����ַ���");
// 	scanf("%c", &a);
// 	foo(str, a);
// 	printf("%s", str);
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void menu()
// {
//     printf("game  start\n");
// }

// int computer()
// {

//     int i, j;
//     j = 1 + (int)(3.0 * rand() / (RAND_MAX + 1.0));
//     return j;
// }

// void game()
// {
//     int a = 0;
//     int b = 0;
//     while (1)
//     {
//         printf("��ҳ�\n");
//         printf("1������  2��ʯͷ  3����   4���˳�\n");
//         scanf("%d", &a);
//         if(a==4)
//         {
//             printf("��Ϸ����\n");
//             break;
//         }
//         switch (a)
//         {
//         case 1:
//             printf("��ҳ�����\n\n");
//             break;
//         case 2:
//             printf("��ҳ�ʯͷ\n\n");
//             break;
//         case 3:
//             printf("��ҳ���\n\n");
//             break;
//         }

//         printf("���Գ�\n");

//         b = computer();
//         switch (b)
//         {
//         case 1:
//             printf("���Գ�����\n\n");
//             break;
//         case 2:
//             printf("���Գ�ʯͷ\n\n");
//             break;
//         case 3:
//             printf("���Գ���\n\n");
//             break;
//         }

//         if(b-a==1||b-a==-2)
//         {
//             printf("����Ӯ\n\n");
//         }
//         else if(b-a==0)
//         {
//             printf("ƽ��\n\n");
//         }
//         else
//         {
//             printf("���Ӯ\n\n");
//         }
        
//     }
// }

// int main()
// {
    
//     srand((int)time(0));
//     menu();
//     game();

//     return 0;
// }
