/* ��д���򣺱�д���� void fun(char *p1, char *p2)���书��Ϊ��ָ��p2ָ����ַ�����
 * �е�ȫ�ַ����Ƶ�ָ��p1ָ����ַ������У��ٱ�дһ��������������fun�����Ĺ��ܣ�ʵ
 * �ַ�����b���ַ�����a�ĸ��ơ�Ҫ�������ַ����������������룬���ƺ��ַ�������������
 * ���
 */
#include <stdio.h>

void fun(char s[], char c[]);

int main()
{
    char str[80], c[80];

    printf("input string:");
    scanf("%s%s", str, c);
    fun(str, c);
    printf("The vowel letters are:%s\n", c);

    return 0;
}

void fun(char s[], char c[])
{
    int i, j;

    for (i = 0, j = 0; s[i] != '\0'; i++, j++)
    {
        c[j] = s[i];
    }
   //c[j] = '\0';
}