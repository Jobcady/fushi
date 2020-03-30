/* ��д���򣬰� m �� n ���� a ��Ԫ�����а��������С�����m��n������10.�ֱ��д
��һά����Ԫ��ֵ����Ԫ��ֵ��С�ĺ������������г�ʼ��һ����ά����a[10][10]��
���ö���������������ÿ�С�ÿ�е����ֵ����Сֵ */
#include <stdio.h>
#include <stdlib.h>

const int m = 10;
const int n = 10;

int max(int a[], int n);
int min(int a[], int n);
void show(int a[][m], int m, int n);

int main()
{
    int i, j, a[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
            a[i][j] = rand() % 100;
    }
    printf("\n���������Ϊ��\n");
    show(a, m, n);
    for (i = 0; i < m; i++)
        printf("��%2d�е����ֵΪ��%2d����СֵΪ��%2d\n", i + 1, max(a[i], n), min(a[i], n));
    printf("\n");

    return 0;
}

int max(int a[], int n)
{
    int i;
    int maxn = a[0];

    for (i = 1; i < n; i++)
        if (maxn < a[i])
            maxn = a[i];

    return maxn;
}

int min(int a[], int n)
{
    int i;
    int minn = a[0];

    for (i = 1; i < n; i++)
        if (minn > a[i])
            minn = a[i];

    return minn;
}

void show(int a[][m], int m, int n)
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n");
}