/* 编写程序，把 m × n 矩阵 a 的元素逐列按降序排列。假设m、n不超过10.分别编写
求一维数组元素值最大和元素值最小的函数，主函数中初始化一个二维数组a[10][10]，
调用定义的两个函数输出每行、每列的最大值和最小值 */
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
    printf("\n数组的数据为：\n");
    show(a, m, n);
    for (i = 0; i < m; i++)
        printf("第%2d行的最大值为：%2d，最小值为：%2d\n", i + 1, max(a[i], n), min(a[i], n));
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