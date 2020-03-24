/* 编写程序：输入 m 个数，求其最大数、最小数和平均数*/

#include <stdio.h>
int main()
{
    float a, b, max, min, sum, ave;
    int i, m;

    printf("请输入数的个数：");
    scanf("%d", &m);
    printf("第1个数是：");
    scanf("%f", &a);
    max = a;
    min = a;
    sum = a;
    for (i = 1; i < m; i++)
    {
        printf("第%d个数是：", i + 1);
        scanf("%f", &b);
        sum += b;
        ave = sum / m;
        if (b > max)
            max = b;
        if (b < min)
            min = b;
    }
    printf("max = %.2f , min = %.2f , ave = %.2f \n", max, min, ave);

    return 0;
}