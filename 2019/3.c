/* ��д������С�������ĺ��� */
#include <stdio.h>

int gcd(int u, int v); //���Լ��
int lcm(int u, int v); //��С������

int main()
{
    int u, v;

    printf("����������:");
    scanf("%d %d", &u, &v);
    printf("���Լ��Ϊ:%d\n", gcd(u, v));
    printf("��С������Ϊ:%d\n", lcm(u, v));

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