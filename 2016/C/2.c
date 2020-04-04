/* 编写程序：输出100~200之间的全部素数
 * (注：素数即除了1和该数本身外，不能被其它任何整数整除的数)
 */

#include <stdio.h>
#include <math.h>
int main()
{
    int n, k, i;
    int m = 0;

    for (n = 101; n <= 200; n += 2)
    {
        k = sqrt(n);
        for (i = 2; i <= k; i++)
            if (n % i == 0)
                break;
        if (i >= k + 1)
        {
            printf(" %d ", n);
            m += 1;
        }
        if (m % 10 == 0)
            printf("\n");
    }
    printf("\n");

    return 0;
}
