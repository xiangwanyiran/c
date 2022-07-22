/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-16 10:00:41
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-19 09:53:38
 * @FilePath: \c\day7.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

/* #include <stdio.h>

int main()
{
    char a = '0';
    for (a = 'a'; a <= 'd'; ++a)
    if ((a != 'a') + (a == 'c') + (a == 'd') +(a != 'd')==3)printf("凶手是%c", a);
    return 0;
} */

// #include <stdio.h>

// int main()
// {
// 	char str[32] = { '\0' };
// 	char str2[32] = { '\0' };
// 	int i = 0; int k = 0;
// 	int n = 1;
// 	int sz = sizeof(str2);
// 	scanf("%s", str);
// 	str2[0] = str[i];
// 	while (str[i] != '\0')
// 	{
// 		for (k = 0; k <= sz; k++)
// 		{
// 			if (str[i] == str2[k])
// 			{
// 				break;
// 			}
// 			if (k == sz)
// 			{
// 				str2[n] = str[i];
// 				n++;
// 			}
// 		}
// 		i++;
// 	}
// 	printf("%s", str2);
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[34];
//     int n = 0;
//     int i = 0;
//     // scanf("%[^\n]", str);
//     scanf("%s",str);
//     puts(str);
//     // printf("%s",str);
//     int sz = strlen(str);
//     printf("%d ", sz);
//     for (i = 0; i<=sz; i++)
//     {
//         for (int j = i+1; j<=sz; j++)
//             if (str[i] == str[j])
//             {
//                 for (n = j; n<= sz; n++)
//                 {
//                     str[n] = str[n+1];
//                 }
//                 sz--;
//                 j--;
//             }
//     }
//     //str[sz+1]='\0';
//     printf("%s", str);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a[100] = {0};
//     int i, j, k, str = 0;
//     printf("请输入一串字符：");
//     scanf("%s", a);
//     for (i = 0; a[i] != '\0'; i++)
//         str = i;
//     for (i = 0; i <= str; i++)
//     {

//         for (j = i + 1; j <= str; j++)

//         {
//             if (a[i] == a[j])
//             {
//                 for (k = j; k <= str; k++)
//                 {
//                     a[k] = a[k + 1];
//                 }
//                 str--;
//                 j--;
//             }
//         }
//     }
//     a[str + 1] = '\0';

//     printf("删除重复的字符后变为：%s", a);
// return 0;
// }

// #include <stdio.h>

// void bubble_sort(int arr[],int sz)
// {
//     int k=0;
//     for(k=0;k<sz-1;k++)
//     {
//         int j=0;
//         for(j=0;j<sz-1-k;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int tmp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=tmp;
//             }
//         }
//     }

//     for(k=0;k<sz;k++)
//     {
//         printf("%d ",arr[k]);
//     }
// }

// int main()
// {
//     int n;
//     printf("请输整型数组长度 \n",n);
//     scanf("%d", &n);
//     int arr[n];
//     printf("请输入%d个整型数字 \n",n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int sz = sizeof(arr) / sizeof(arr[0]);

//     bubble_sort(arr,sz);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     printf("%d\n",arr[-1]);
//     for(int i=0;i<10;i++)
//     printf("arr[%d]=%d ",i,arr[i]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int j,d;
//     int math_num=0,c_num=0,english_num=0;
//     printf("请输入学生人数和科目");
//     scanf("%d %d",&j,&d);
//     int arr[j][d];
//     int num=0;
//      printf("依次输入数学 c 英语的成绩\n");
//     for (int i = 0; i < j; i++)
//     {

//         for (int k = 0; k < d; k++)
//         {
//             scanf("%d", &arr[i][k]);
//         }
//     }

//     printf("math   C    ENGLISH\n");
//     for (int i = 0; i < j; i++)
//     {
//         for (int k = 0; k < d; k++)
//         {
//             num+=arr[i][k];
//             printf("%d     ", arr[i][k]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<5;i++)
//     {
//         math_num+=arr[i][0];
//         c_num+=arr[i][1];
//         english_num+=arr[i][2];
//     }

//     printf("数学平均分为%d\n",math_num/5);
//     printf("C平均分为%d\n",c_num/5);
//     printf("英语平均分为%d\n",english_num/5);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char arr[4][20];
//     for(int i=0;i<4;i++)
//     {
//         printf("第%d组 ",i+1);
//         scanf("%s",arr[i]);
//     }

//     for(int i=0;i<4;i++)
//     {
//         printf("第%d组 ",i+1);
//         printf("%s\n",arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n=0;
//     int count=0;
//     int j=0,k=0;
//     printf("创建一个nxn的二维数组");
//     scanf("%d",&n);
//     int arr[n][n];
//     for(int i=0;i<n;i++)
//     {
//         printf("输入%d列:",i+1);
//         for(int j=0;j<n;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         printf("第%d列: ",i+1);
//         for(int j=0;j<n;j++)
//         {
//             printf("%d   ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i=0;i<n;i++)
//     {
//         count+=arr[i][i];
//     }
//     for( j=0,k=n-1;j<n;j++,k--)
//     {
//         count +=arr[j][k];
//     }
    
//     if((n%2!=0)&&(n>=3))
//     {
//         count-=arr[n/2][n/2];
//     }

//     printf("对角线为%d\n",count);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20];
    int count = 0;
    int j = 0;
    scanf("%[^\n]", arr);
    int sz = strlen(arr);
    for (int i = 0; i < sz; i++)
    {
        for (int k = 0; k < sz; k++)
        {
            if (arr[i] == arr[k])
            {
                count++;
            }
        }
        for (j = i; j > 0; j--)
        {
            if (arr[i] == arr[j-1])
            {
                break;
            }
        }
        if (j == 0)
        {
            printf("%c出现了%d次\n", arr[i], count);
        }

        count = 0;
    }
    return 0;
}
