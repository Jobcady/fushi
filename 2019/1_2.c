/* ��1~10�Ľ׳�֮�� */
#include <stdio.h>

int product(int n);

int main()
{
    int j;
    int sum = 0;

    for (j = 1; j <= 10; j++)
    {
        printf("%d�Ľ׳�Ϊ��%d\n", j, product(j));
        sum = sum + product(j);
    }
    printf("\n1~10�Ľ׳�֮��Ϊ��%d", sum);

    return 0;
}

int product(int n)
{
    int i;
    int p = 1;

    for (i = 1; i <= n; i++)
        p *= i;

    return p;
}