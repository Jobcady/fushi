/* ��дһ������fun��ʵ�ֽ�һ���ַ������е�ȫ���ַ����Ƶ���һ���ַ�������(����
 * strcpy����)���ٱ�дһ��������������fun�����Ĺ��ܣ����ַ�����b���Ƶ��ַ�����a��Ҫ
 * �������ַ����������������룬���ƺ���ַ�����Ҳ�������������
 */

#include <stdio.h>

void fun(char s[], char c[]);

int main()
{
    /* bug�� */
    char str[80], c[80];

    printf("input string:");
    gets(str);
    fun(str, c);
    printf("The vowel letters are:%s\n", c);

    return 0;
}

void fun(char s[], char c[])
{
    int i, j;

    for (i = 0, j = 0; s[i] != '\0'; i++)
    {
        c[j] = s[i];
        j++;
    }
    c[j] = '\0';
}