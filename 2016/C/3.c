/* 编写一个函数fun，实现将一个字符数组中的全部字符复制到另一个字符数组中(不用
 * strcpy函数)；再编写一个主函数，利用fun函数的功能，将字符数组b复制到字符数组a。要
 * 求两个字符数组由主函数输入，复制后的字符数组也由主函数输出。
 */

#include <stdio.h>

void fun(char s[], char c[]);

int main()
{
    /* bug版 */
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