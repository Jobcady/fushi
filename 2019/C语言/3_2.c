/*�ҳ�һ����ά�����еİ��㣬����λ���ϵ�Ԫ���ڸ���������ڸ�������С */
#include <stdio.h>
#define n 4
#define m 5                                         //����Ϊ4��5��
int main()
{
    int i, j, k, a[n][m], max, maxj, flag;
    printf("���������飺\n");
    for (i = 0; i < n; i++)                         //��������
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
    {
        /* �ο������޴�ѭ�� */
        for (j = 0; j < m; j++)
            printf(" %d ", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        max = a[i][0];                              //��ʼʱ����a[i][0]���
        maxj = 0;                                   //���к�0����maxj����
        for (j = 0; j < m; j++)                     //�ҳ���i�е������
            if (a[i][j] > max)
            {
                max = a[i][j];                      //���������ֵ�����max��
                maxj = j;                           //������������кŴ����maxj��
            }
        flag = 1;                                   //�ȼ���ʱ���㣬��flagΪ1����
        for (k = 0; k < n; k++)
            if (max > a[k][maxj])                   //�����������ͬ��Ԫ�����
            {
                flag = 0;                           //���max����ͬ����С����ʾ���ǰ��㣬��flagΪ1
                continue;
            }
        if (flag)                                   //���flagΪ1��ʾ�ǰ���
        {
            printf("a[%d][%d] = %d", i, maxj, max); //��������ֵ�����ڵ����к�
            break;
        }
    }
    if (!flag)                                      //���flagΪ0��ʾ���㲻����
        printf("���㲻���ڣ�\n");

    return 0;
}