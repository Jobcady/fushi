/* 某门课程有60名学生，编写程序(要求使用结构体数组存放学生数据):
 * (1) 从键盘键入所有学生的学号、姓名、成绩；
 * (2) 计算并输出课程的平均成绩；
 * (3) 按成绩从高到低的顺序输出学生名单(名单包括学生的姓名和成绩)；
 * (4) 将排序好的学生数据(包括学号、姓名、成绩)存放在磁盘文件"stud.txt"中
 */
#include <stdio.h>
#define numb 3

struct student
{
    int num;        //学号
    char name;      //姓名
    float score[3]; //成绩(总共三门课程)
    float ave;      //平均成绩
} stud[numb];

void input(struct student stud[]);            //输入
float average(struct student stud[], int j);  //求平均成绩
void max(struct student stud[]);              //求每个学生的总成绩
void QuickSort(float R[], int low, int high); //快速排序

int main()
{
    int i, j, k;
    float e[3];

    input(stud);

    printf("平均成绩：\n");
    for (j = 0; j < 3; j++)
    {
        e[j] = average(stud, j);
        printf("  第%d门课程的平均成绩为：%f\n", j + 1, e[j]);
    }
    max(stud);

    return 0;
}

void input(struct student stud[])
{
    int i, j;

    for (i = 0; i < numb; i++)
    {
        printf("请输入第%d个学生的信息：\n", i + 1);
        printf("  学号：");
        scanf("%d", &stud[i].num);
        printf("  姓名：");
        scanf("%s", &stud[i].name);
        for (j = 0; j < 3; j++)
        {
            printf("  第%d门课程的成绩：", j + 1);
            scanf("%f", &stud[i].score[j]);
        }
        printf("\n");
    }
}

float average(struct student stud[], int j)
{
    int i;
    float ave1;
    float sum = 0;

    for (i = 0; i < numb; i++)
        sum += stud[i].score[j]; //求第j门课程的总成绩
    ave1 = sum / numb;

    return ave1;
}

void max(struct student stud[])
{
    float sum[numb]; //存放每个学生的总成绩
    int i, j;

    printf("\n成绩排名：\n  学号    姓名    成绩          名次\n");
    for (i = 0; i < numb; i++)
        for (j = 0; j < 3; j++)
            sum[i] += stud[i].score[j];

    QuickSort(sum, 0, numb - 1);
    for (i = numb - 1; i >= 0; i--)
    {
        printf("  %d    %s    %f    %d", stud[i].num, &stud[i].name, sum[i], numb - i);
        printf("\n");
    }
}
void QuickSort(float R[], int low, int high)
{
    int i = low;
    int j = high;
    float temp;
    if (low < high)
    {
        temp = R[low];
        while (i < j)
        {
            while (j > i && R[j] > temp)
                --j;
            if (i < j)
            {
                R[i] = R[j];
                ++i;
            }
            while (i < j && R[i] < temp)
                ++i;
            if (i < j)
            {
                R[j] = R[i];
                --j;
            }
        }
        R[i] = temp;
        QuickSort(R, low, i - 1);
        QuickSort(R, i + 1, high);
    }
}