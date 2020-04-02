/* 编写程序：编写函数 void fun(char *p1, char *p2)，其功能为将指针p2指向的字符数组
 * 中的全字符复制到指针p1指向的字符数组中，再编写一个主函数，利用fun函数的功能，实
 * 字符数组b向字符数组a的复制。要求两个字符数组由主函数输入，复制后字符数组由主函数
 * 输出
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