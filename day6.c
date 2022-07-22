/* #include <stdio.h>
int main()
{
    int year = 0, mon = 0, day = 0, a = 0, i = 0;

    int flage;
    printf("计算该日是这年的第几天：");
    printf("请输入年月日：");
    scanf("%d %d %d", &year, &mon, &day);
    if (mon > 12 || day > 31)
    {
        printf("错误");
        return 0;
    }
    if ((mon % 2 != 0 && day > 30 && mon > 7) || (mon % 2 == 0 && day > 30 && mon < 8))
    {
        printf("错误");
        return 0;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        flage = 1; //闰年
        if ((mon == 2 && day > 29))
        {
            printf("错误");
            return 0;
        }
    }
    else
    {
        flage = 0; //平年
        if (mon == 2 && day > 28)
        {
            printf("错误");
            return 0;
        }
    }
    mon -= 1;

    if (flage == 1)
    {
        switch (mon)
        {
        case 11:
            a = a + 30;
        case 10:
            a = a + 31;
        case 9:
            a = a + 30;
        case 8:
            a = a + 31;
        case 7:
            a = a + 31;
        case 6:
            a = a + 30;
        case 5:
            a = a + 31;
        case 4:
            a = a + 30;
        case 3:
            a = a + 31;
        case 2:
            a = a + 29;
        case 1:
            a = a + 31;
        case 0:
            a = a + day;
        }
    }
    else if (flage == 0)
    {
        switch (mon)
        {
        case 11:
            a = a + 30;
        case 10:
            a = a + 31;
        case 9:
            a = a + 30;
        case 8:
            a = a + 31;
        case 7:
            a = a + 31;
        case 6:
            a = a + 30;
        case 5:
            a = a + 31;
        case 4:
            a = a + 30;
        case 3:
            a = a + 31;
        case 2:
            a = a + 28;
        case 1:
            a = a + 31;
        case 0:
            a = a + day;
        }
    }

    printf("%d", a);
    return 0;
} */

/*
#include <stdio.h>

int main()
{

    return 0;
} */

/* #include <stdio.h>

int main()
{
    char arr[100];
    char* a=arr;
    int i=0;
    scanf("%s",a);

loop:

    i++;

    if(a[i]!='\0')goto loop;
    printf("%d", i);


    return 0;
} */

/* #include <stdio.h>

int main()
{
    int row = 1;
    int clo = 1;

    char a = '0';
    a = getchar();


    for (row = 65; row <= a; row++)
    {
        for (clo = 1; clo < a - row; clo++)
            printf(" ");
        for (clo = 65; clo < row; clo++)
            printf("%c", clo);
        for (; clo >= 65; clo--)
            printf("%c", clo);

        printf("\n");
    }

    return 0;
} */


