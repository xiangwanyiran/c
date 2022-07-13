/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-12 10:17:05
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-13 09:47:31
 * @FilePath: \c\day3.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/* #include <stdio.h>

int main()
{

    int count =printf ("sdfhashf\n");
    printf("count =%d ",count);



    return 0;
} */

/* #include <stdio.h>

#define PAGES 931

int main()
{
    const double RENT = 3852.99;

    printf("*%-10d*\n", PAGES);
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    return 0;
} */

/* #include <stdio.h>

int myqsort_int(void* e1,void* e2)
{
    return *(int*)e1-*(int*)e2;
}


void swap(char* buf1,char* buf2,int wind)
{
    int i=0;
    for(i=0;i<wind;i++)
    {
        int tmp=*buf1;
        *buf1=*buf2;
        *buf2=tmp;
        buf1++;
        buf2++;
    }
}


void bubble_sort(void* base,int sz,int wind,int (*cmp)(void* e1,void* e2))
{
    int j,k=0;
    for(j=0;j<sz-1;j++)
    {
        for(k=0;k<sz-1-j;k++)
        {
            if(cmp((char*)base+k*wind,(char*)base+(k+1)*wind)>0)
            {
                swap((char*)base+k*wind,(char*)base+(k+1)*wind,wind);
            }
        }
    }
}


void test()
{
    int arr[10];
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf("%d[^\n]",&arr[i]);
    }
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz,sizeof(arr[0]),myqsort_int);

    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }

}




int main()
{
    test();
    return 0;
} */

/* #include <stdio.h>
int main()
{
    int i=0;
    int arr[10];
    while(i<10)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    printf("%d\n",sizeof(arr)/sizeof(arr[0]));
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    return 0;
} */

/* #include <stdio.h>

typedef struct stu
{
    char name[10];
    unsigned int num;
    char gender[10];
    unsigned short age;
    unsigned short height;
} stu;

void scan(stu* stu)
{
    int i = 0;
    scanf("%s%d%s%d%d",&stu->name,&stu->num,&stu->gender,&stu->age,&stu->height);
}


int main()
{
    stu stu1;
    scan(&stu1);
    printf("姓名： %s\n学号 : %d \n性别 :%s \n年龄 :%d 岁 \n身高 :%dcm",stu1.name,stu1.num,stu1.gender,stu1.age,stu1.height);
    return 0;
}  */

/* #include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)printf("%d",a);
    else if (b>a&&b>c)
    {
      printf("%d",b);
    }
    else
    {
         printf("最大值为%d",c);
    }



    return 0;
} */

/*
#include <stdio.h>

int main()
{
    int a;
    printf("输入一个两位整数:");
    scanf("%d",&a);
    printf("输出%c",a);
    return 0;
}
 */

#include <stdio.h>
int main(void)
{
    int s = 0;
    int a, b;
    scanf("%d", &s);
    printf("\'%c\'", 48 + s / 10);
    printf("\'%c\'", 48 + s % 10);
    return 0;
}
