/*找出一个二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小 */
#include <stdio.h>
#define n 4
#define m 5                                         //数组为4行5列
int main()
{
    int i, j, k, a[n][m], max, maxj, flag;
    printf("请输入数组：\n");
    for (i = 0; i < n; i++)                         //输入数组
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
    {
        /* 参考资料无此循环 */
        for (j = 0; j < m; j++)
            printf(" %d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        max = a[i][0];                              //开始时假设a[i][0]最大
        maxj = 0;                                   //将列号0赋给maxj保存
        for (j = 0; j < m; j++)                     //找出第i行的最大数
            if (a[i][j] > max)
            {
                max = a[i][j];                      //将本行最大值存放在max中
                maxj = j;                           //将本行最大数列号存放在maxj中
            }
        flag = 1;                                   //先假设时鞍点，以flag为1代表
        for (k = 0; k < n; k++)
            if (max > a[k][maxj])                   //将最大数和其同列元素相比
            {
                flag = 0;                           //如果max不是同列最小，表示不是鞍点，令flag为1
                continue;
            }
        if (flag)                                   //如果flag为1表示是鞍点
        {
            printf("a[%d][%d] = %d", i, maxj, max); //输出鞍点的值和所在的行列号
            break;
        }
    }
    if (!flag)                                      //如果flag为0表示鞍点不存在
        printf("鞍点不存在！\n");

    return 0;
}