/* ��д�������� m �������������������С����ƽ����*/

#include <stdio.h>
int main()
{
    float a, b, max, min, sum, ave;
    int i, m;

    printf("���������ĸ�����");
    scanf("%d", &m);
    printf("��1�����ǣ�");
    scanf("%f", &a);
    max = a;
    min = a;
    sum = a;
    for (i = 1; i < m; i++)
    {
        printf("��%d�����ǣ�", i + 1);
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