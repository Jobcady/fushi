/* ��дһ���������ú�����������ͳ���ַ��������ŵ��ظ��ַ���������Ȼ�󷵻ظ�ֵ��
����aabbbb��4��abcd��1 */
#include <stdio.h>

#define max 100
int strNum(char *x, int len); //xΪ�ַ�����lenΪ�ַ�������

int main()
{
    char words[max];

    printf("�����ַ�����");
    scanf("%s", words);
    printf("�ظ��ַ�������Ϊ%d", strNum(words, max));

    return 0;
}

int strNum(char *x, int len)
{
    char y;
    int i;
    int num = 1;
    int tmp = 1;
    y = x[0];

    for (i = 1; i < len; i++)
    {
        if (y == x[i])
        {
            tmp++;
            if (tmp >= num)
                num = tmp;
        }
        else
        {
            y = x[i]; //�ο�������ȱ�ٴ���
            tmp = 1;
        }
    }

    return num;
}