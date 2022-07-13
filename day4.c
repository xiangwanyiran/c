/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-12 19:54:54
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-13 16:42:54
 * @FilePath: \c\test.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

/* #include <stdio.h>

int main()
{
	char *s;
	scanf("%s",s);
	printf("输出 %s ",s);
	return 0;
} */

/* #include <stdio.h>
int main()
{
	char* b;


	scanf("%s", b);
	// printf("age:%d, ch:%d, b:%c\n", age, ch, b);
	printf("%s",b);
	return 0;


}

 */

#include <stdio.h>

int main()
{
	int age;
	printf("年龄： ");
	scanf("%d", &age);

	if (age > 0 && age <= 6)
	{
		printf("婴幼儿\n");
	}
	else if (age > 7 && age <= 12)
	{
		printf("少儿\n");
	}
	else if (age > 13 && age <= 17)
	{
		printf("青少年\n");
	}
	else if (age > 18 && age <= 45)
	{
		printf("青年\n");
	}
	else if (age > 45 && age <= 69)
	{
		printf("中年\n");
	}
	else
	{
		printf("老年\n");
	}

	return 0;
}