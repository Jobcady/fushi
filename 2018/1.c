/* ��д��������20���з���������ͳ������������͸������ø��� */
#include <stdio.h>
int main()
{
    int n, i, f, z, l;
    z = 0;
    f = 0;
    l = 0;

    for (i = 1; i <= 20; i++)
    {
        printf("�������%d������", i);
        scanf("%ld", &n);
        if (n == 0)
            l++;
        else if (n > 0)
            z++;
        else
            f++;
    }
    printf("���У�%d��\n�������У�%d��\n�������У�%d��\n", l, z, f);

    return 0;
}