/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-12 19:54:54
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-13 16:42:54
 * @FilePath: \c\test.c
 * @Description: ����Ĭ������,������`customMade`, ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

/* #include <stdio.h>

int main()
{
	char *s;
	scanf("%s",s);
	printf("��� %s ",s);
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
	printf("���䣺 ");
	scanf("%d", &age);

	if (age > 0 && age <= 6)
	{
		printf("Ӥ�׶�\n");
	}
	else if (age > 7 && age <= 12)
	{
		printf("�ٶ�\n");
	}
	else if (age > 13 && age <= 17)
	{
		printf("������\n");
	}
	else if (age > 18 && age <= 45)
	{
		printf("����\n");
	}
	else if (age > 45 && age <= 69)
	{
		printf("����\n");
	}
	else
	{
		printf("����\n");
	}

	return 0;
}