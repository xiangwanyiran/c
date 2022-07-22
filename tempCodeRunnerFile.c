#include <stdio.h>
#include <string.h>

int foo(char str[])
{
    int num = 0;
    int count = 0;
    int sz = strlen(str);
    if (*str - 45 == 0)
    {
        char *p=str+1;
        for (int i = sz-1; i > 0; i--)
        {
            num = ((*p++) - 48);
            for (int k = 0; k < i - 1; k++)
            {
                num *= 10;
            }
            count += num;
        }
        count=0-count;
        return count;
    }

    for (int i = sz; i > 0; i--)
    {
        num = ((*str++) - 48);
        for (int k = 0; k < i - 1; k++)
        {
            num *= 10;
        }
        count += num;
        // printf("%d ",num);
    }
    return count;
}

int main()
{
    char str[10];
    printf("输入数字");
    scanf("%s", str);
    // foo(str);
    printf("%d", foo(str));
    return 0;
}