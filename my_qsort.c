/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-08 08:44:17
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-08 14:27:02
 * @FilePath: \c\my_qsort.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */


#include <stdio.h>

int myint_sort(void* e1,void* e2)
{
    return *(int*)e1-*(int*)e2;

}



void swap(char* buf1,char *buf2,int wind)
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




void my_qsort(void* base ,int sz,int wind,int (*cmp)(void* e1,void *e2))
{
    int j,k=0;
    for(j=0;j<sz-1;j++)
    {
        for(k=0;k<sz-1-j;k++)
        {
            if((*cmp)((char*)base+k*wind,(char*)base+(k+1)*wind)>0)
            {
                swap((char*)base+k*wind,(char*)base+(k+1)*wind,wind);
            }
        }
    }
}

void test()
{
    int arr[]={9,88,4,8,5,4,3,7,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    my_qsort(arr,sz,sizeof(arr[0]),myint_sort);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    test();
    return 0;
}


