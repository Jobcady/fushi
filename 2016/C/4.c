/* 编写函数 int find(int *p, int n, int a),其功能为在指针p所指的数组中查找整型数a，
如果a在数组中，该函数返回a在数组中的位置值，否则返回-1。*/
#include <stdio.h>

int find(int *p, int n, int x);

int main()
{
    int a[5], i, x;

    printf("输入五个数字：");
    for (i = 0; i < 5; i++)
        scanf("%d", a + i); //以空格间隔两个数：1空2空，则1和2分别存入a[0]和a[1]
    printf("输入一个要查找的数：");
    scanf("%d", &x);
    if (find(a, 5, x) == -1)
        printf("%d不在这个数组中！\n", x);
    else
        printf("%d在这个数组中第%d个位置！\n", x, find(a, 5, x) + 1);

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