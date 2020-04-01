/* 编写程序：计算 sin x 的值 */
#include <stdio.h>
#include <math.h>
/*int main()
{
    double sinx, x;
    int n, t, i, j, z;
    t = 1;
    sinx = 0;

    printf("请输入x的值：");
    scanf("%lf", &x);
    printf("请输入n的值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (2 * i - 1); j++)
            t = t * j;
        z = pow((-1), i - 1);
        sinx = sinx + z * ((pow(x, (2 * i - 1))) / t);
    }
    printf("sinx = %f\n", sinx);

    return 0;
}*/

double fact(int n);

int main()
{
    double x;
    double sum = 0;
    double term = 1;
    int n = 1, t = 1;

    printf("输入x的值：");
    scanf("%lf", &x);
    while (term >= 1e-5)
    {
        term = pow(x, 2 * n - 1) / fact(2 * n - 1);
        sum += t * term;
        t = -t;
        n++;
    }
    printf("%.3lf\n%d", sum, n - 1);

    return 0;
}

double fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}