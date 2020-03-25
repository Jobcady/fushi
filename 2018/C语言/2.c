/* 编写程序：输出100~1000之间其数字之和等于9而且该数可被5整除的整数 */
#include <stdio.h>
int main()
{
    int i, flag, bits, deacdes, hundreds;

    for (i = 100; i <= 1000; i++)
    {
        bits = i % 10;           //个位
        deacdes = (i / 10) % 10; //十位
        hundreds = i / 100;      //百位
        flag = bits + deacdes + hundreds;
        if (flag == 9 && i % 5 == 0)
            printf(" %d ", i);
    }

    return 0;
}