/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-12 19:54:54
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-14 11:04:27
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

/* #include <stdio.h>

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
} */

/* #include <stdio.h>

int main()
{
	int a;
	printf("������ݣ�");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
	{
		printf("����\n");
	}
	else
	{
		printf("ƽ��");
	}
	return 0;
} */

/* #include <stdio.h>

int main()
{
	float a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	if (a + b > c && a + c > b && b + c > a)
	{

		if (a == b && b == c)
		{
			printf("�ȱ�������");
		}
		else if (a==b||a==c||b==c)
		{
			printf("����������");
		}
		else if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		{
			printf("ֱ��������");
		}
		else
		{
			printf("��ͨ������");
		}

	}
	else
	{
		printf("����������");
	}
	return 0;
} */

/* #include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	// a = a - b;
	// b = a + b;
	// a = b - a;
	// a=a^b;
	// b=a^b;
	// a=a^b;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d", a, b);
	return 0;
} */

/* #include <stdio.h>
int main()
{
	unsigned char ch = 0x78;
	// ch |= 0x04;
	// ch &= 0xDF;
	ch |= (0x01<<2);
	ch &= ~(0x01<<5);
	printf("%#X\n", ch);
	return 0;
} */