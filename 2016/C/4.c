/* ��д���� int find(int *p, int n, int a),�书��Ϊ��ָ��p��ָ�������в���������a��
���a�������У��ú�������a�������е�λ��ֵ�����򷵻�-1��*/
#include <stdio.h>

int find(int *p, int n, int x);

int main()
{
    int a[5], i, x;

    printf("����������֣�");
    for (i = 0; i < 5; i++)
        scanf("%d", a + i); //�Կո�����������1��2�գ���1��2�ֱ����a[0]��a[1]
    printf("����һ��Ҫ���ҵ�����");
    scanf("%d", &x);
    if (find(a, 5, x) == -1)
        printf("%d������������У�\n", x);
    else
        printf("%d����������е�%d��λ�ã�\n", x, find(a, 5, x) + 1);

    return 0;
}

int find(int *p, int n, int x)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (p[i] == x)
            return i;
    }

    return -1;
}