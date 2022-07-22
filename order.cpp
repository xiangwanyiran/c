/*
 * @Author: Daluna 1175680996@qq.com
 * @Date: 2022-07-16 09:50:33
 * @LastEditors: Daluna 1175680996@qq.com
 * @LastEditTime: 2022-07-17 15:10:52
 * @FilePath: \c\order.cpp
 * @Description: ����Ĭ������,������`customMade`, ��koroFileHeader�鿴���� ��������: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>

#define Initsize 5

typedef struct
{
    int length;
    int maxsize;
    int *data;
} Sqlist;

void Initlist(Sqlist &L)
{
    L.data = (int *)malloc(Initsize * sizeof(int));
    if (!L.data)
        exit(0);
    L.length = 0;
    L.maxsize = Initsize;
    printf("��ʼ���ɹ�\n");
}

void WriteList(Sqlist &L)
{
    printf("���봴��˳����ȣ�");
    scanf("%d", &L.length);
    printf("�������˳���Ԫ�أ�");
    int i = 0;
    for (i = 0; i < L.length; i++)
    {
        scanf("%d", &L.data[i]);
    }
}

//��ӡ˳���

bool printlist(Sqlist &L)
{
    if (!L.data)
        return false;
    int i;
    printf("˳���Ԫ��Ϊ��");
    for (i = 0; i < L.length; i++)
    {
        printf("%d ", L.data[i]);
    }
    printf("\n");
    return true;
}

//����˳���ĳ���
void IncreaseSize(Sqlist &L)
{
    int newlen;
    int *p = L.data;
    printf("���ӵĳ��ȣ�");
    scanf("%d", &newlen);
    L.data = (int *)malloc((newlen + L.maxsize) * sizeof(int));
    int i = 0;
    for (i = 0; i < L.length; i++)
        L.data[i] = p[i];
    L.maxsize += newlen;
    free(p);
}

//����Ԫ��
bool Listinsret(Sqlist &L)
{
    int j, k;
    printf("���������ӵ�Ԫ�غ�Ԫ��λ�ã�");
    scanf("%d %d", &j, &k);
    if (k < 1 || k > L.length + 1)
        return false;
    if (k > L.maxsize)
        return false;
    int i = 0;
    for (i = L.length; i >= k; i--)
    {
        L.data[i] = L.data[i - 1];
    }
    L.data[k - 1] = j;
    L.length++;
    printf("�����Ԫ����%d �����λ��Ϊ%d\n", j, k);
    return true;
}
//ɾ������Ԫ��
bool Listdelet(Sqlist &L)
{
    int j, i;
    printf("������ɾ��Ԫ�ص�λ�ã�");
    scanf("%d", &j);
    if (j < 1 || j > L.length + 1)
        return false;
    if (!L.data)
        return false;
    int e = L.data[j - 1];

    for (i = j; i <= L.length; i++)
    {
        L.data[i - 1] = L.data[i];
    }
    L.length--;
    printf("ɾ����Ԫ��Ϊ%d ,Ԫ�ص�ַΪ%d\n", e, j);
    return true;
}

bool GetElem(Sqlist &L)
{
    int num;
    printf("��������Ҫ���ҵĵڼ���Ԫ�أ�");
    scanf("%d", &num);
    if (num < 1 || num > L.length + 1)
    {
        printf("����ʧ�� ");
        return false;
    }

    printf("��%d��Ԫ����%d \n", num, L.data[num - 1]);

    return true;
}

void LocatElem(Sqlist &L)
{
    int num, i;
    int count = 0;
    printf("����Ҫ���ҵ�Ԫ��ֵ ");
    scanf("%d", &num);
    for (i = 0; i < L.length; i++)
    {
        if (L.data[i] == num)
        {
            printf("�ҵ��� Ԫ���ǵ�%d ��\n", i + 1);
            count++;
        }
    }
    printf("��Ԫ�ع���%d��\n", count);
    if (count == 0)
    {
        printf("˳�����û�и�Ԫ��\n");
    }
}

void DestroyList(Sqlist &L)
{
    L.length = 0;
    L.maxsize = 0;
    free(L.data);
    printf("˳���������\n");
}

int Listcount(Sqlist *L)
{
    return L->length;
}

int main()
{
    Sqlist L;
    Initlist(L);
    WriteList(L);
    printlist(L);
    IncreaseSize(L); //����˳���ĳ���
    printlist(L);
    Listinsret(L); //����Ԫ��
    printlist(L);
    Listdelet(L); //ɾ��������Ӧλ�õ�Ԫ��
    printlist(L);
    GetElem(L);   //����Ԫ��λ����ֵ
    LocatElem(L); //����ֵ��Ԫ��λ��
    int ret = Listcount(&L);//���
    printf("��Ϊ%d\n",ret);
    DestroyList(L); //���ٱ�
    return 0;
}