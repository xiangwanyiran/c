/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-20 11:47:32
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-21 23:22:30
 * @FilePath: \c\day9.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// #include <stdio.h>

// int main()
// {
//     char* arr[]={"aaaa","bbbb","cccc"};
//     printf("%s %s %s",*arr,*(arr+1),*(arr+2));
//     return 0;
// }

// #include <stdio.h>

// int find(int* arr,int sz)
// {
//     int max=0;
//     // for(int i=0;i<sz;i++)
//     // {
//     //     for(int k=0;k<sz;k++)
//     //     {
//     //         if(arr[i]>arr[k]&&arr[i]>max)
//     //         {
//     //             max=arr[i];
//     //         }
//     //     }
//     // }
//     max=*arr;

//     for(int i=1;i<sz;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }

//     return max;
// }

// int main()
// {
//     int num=0;
//     int arr[]={1000,2,3,4,500,6,7,8,1};
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     printf("%d",find(arr,sz));
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char arr[]="hello";
//     printf("%p  %p ",arr,&arr+1);
//     char *p=arr;
//     for(int i=0;arr[i]!='\0';i++)
//     {
//         printf("%c",*(arr+i));
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int *p;
//     printf("%d",sizeof(p));
// 	long a[4] = { 1, 2, 3, 4 };
// 	long* p1 = (long*)(&a + 1);
// 	long* p2 = (long*)((long)a + 1);
// 	printf("%lx\n", *(p1-4));
// 	printf("%lx\n", *p2);
//     printf("%p\n",p1);
//     printf("%p",&a[0]);
// 	return 0;
// }

#include <stdio.h>

int sq_search(int arr[],int n,int num)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		return i;
	}
	return -1;
}


int main()
{
    int n = 0;
    int num = 0;
    int count = 0;
    printf("输入变长数组长度");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    printf("输入%d个数组元素", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("输入需要查找的值");
    scanf("%d", &num);
    // for (int i = 0; i < n; i++)
    //     if (num == *p++)
    //     {
    //         printf("下标为%d", i);
    //         count++;
    //     }
	printf("%d",sq_search(arr,n,num));
    // if (count == 0)
    //     printf("找不到这个数");
    return 0;
}