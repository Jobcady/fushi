/* 编写一个函数，该函数的作用是统计字符串连续着的重复字符最大个数，然后返回该值，
例如aabbbb是4，abcd是1 */
#include <stdio.h>

#define max 100
int strNum(char *x, int len); //x为字符串，len为字符串长度

int main()
{
    char words[max];

    printf("输入字符串：");
    scanf("%s", words);
    printf("重复字符最大个数为%d", strNum(words, max));

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
            y = x[i]; //参考资料中缺少此行
            tmp = 1;
        }
    }

    return num;
}