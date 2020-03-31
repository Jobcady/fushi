/* 编写计算最小公倍数的函数 */
#include <stdio.h>

int gcd(int u, int v); //最大公约数
int lcm(int u, int v); //最小公倍数

int main()
{
    int u, v;

    printf("输入两个数:");
    scanf("%d %d", &u, &v);
    printf("最大公约数为:%d\n", gcd(u, v));
    printf("最小公倍数为:%d\n", lcm(u, v));

    return 0;
}

int gcd(int u, int v)
{
    int t, r;

    if (u < v)
    {
        t = u;
        u = v;
        v = t;
    }
    r = u % v;
    while (r != 0)
    {
        u = v;
        v = r;
        r = u % v;
    }

    return v;
}

int lcm(int u, int v)
{
    return (u * v / gcd(u, v));
}