/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-07 19:41:30
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-12 16:24:32
 * @FilePath: \c\bubble_sort.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

void bubble_sort(int arr[],int sz)
{
  int j=0;
  int k=0;
  for(j=0;j<sz-1;j++)
  {
    for(k=0;k<sz-1-j;k++)
     {
	if(arr[k]>arr[k+1])
	{
	  int tmp=arr[k];
	  arr[k]=arr[k+1];
	  arr[k+1]=tmp;
	}
     }
  }
}

int main()
{
  int arr[]={9,8,7,6,5,4,3,2,1};
  int sz=sizeof(arr)/sizeof(arr[0]);
  int i=0;
  bubble_sort(arr,sz);
  for(i=0;i<sz;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  getchar();
return 0;
}
