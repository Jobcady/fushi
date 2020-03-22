/* 编写程序：输入20个有符号整数，统计正整数、零和负整数得个数 */
#include <stdio.h>
#define num 20
int main()
{
    int n, i, f, z, l;
    z = 0; //正整数
    f = 0; //负整数
    l = 0; //零

    for (i = 1; i <= num; i++)
    {
        printf("请输入第%d个数：", i);
        scanf("%ld", &n);
        if (n == 0)
            l++;
        else if (n > 0)
            z++;
        else
            f++;
    }
    printf("零有：%d个\n正整数有：%d个\n负整数有：%d个\n", l, z, f);

    return 0;
}