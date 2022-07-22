/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-07 20:47:07
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-12 16:25:52
 * @FilePath: \c\malloc.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include <stdio.h>
#include <stdlib.h>


struct S
{
    int a;
    int* arr;
};


int main()
{
    struct S* ps=(struct S*)malloc(sizeof(struct S));
    ps->arr=(int*)malloc(6*sizeof(int));

    int i=0;    for ( i = 0; i < 6; i++)
    {  
       ps->arr[i]=i;
    }
    
    for(i=0;i<6;i++)
    {
        printf("%d",ps->arr[i]);
    }


    int* ptr=realloc(ps->arr,10*sizeof(int));
    if(ptr!=NULL)
    {
        ps->arr=ptr;
    }

    for(i=5;i<10;i++)
    {
        ps->arr[i]=5;
    }
    for(i=5;i<10;i++)
    {
        printf("%d",ps->arr[i]);
    }


    free(ps);
    ps=NULL;
    getchar();
    return 0;
}
