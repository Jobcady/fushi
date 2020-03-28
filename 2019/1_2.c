/* 求1~10的阶乘之和 */
#include <stdio.h>

int product(int n);

int main()
{
    int j;
    int sum = 0;

    for (j = 1; j <= 10; j++)
    {
        printf("%d的阶乘为：%d\n", j, product(j));
        sum = sum + product(j);
    }
    printf("\n1~10的阶乘之和为：%d", sum);

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