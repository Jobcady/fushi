/* 某门课程有60个学生，编写程序(要求使用结构体数组存放学生数据)：
(1) 从键盘输入所有学生的学号、姓名、成绩；
(2) 计算并输出课程的平均成绩；
(3) 按成绩从高到低的顺序输出学生名单(名单包括学生的姓名和成绩);
(4) 将排序好的学生数据(包括学号、姓名、成绩)存放在磁盘文件"stud.txt"中。 */
#include <stdio.h>

#define numbers 2

struct student
{
    int num;
    char name;
    float score[3];
    float ave;
} stud[numbers];

void input(struct student stud[]);           //输入数据
float average(struct student stud[], int j); //平均成绩
int max(struct student stud[]);              //最高成绩

int main()
{
    int i, j, k;
    float e[3];

    input(stud);
    for (j = 0, i = 0; j < 3 && i < 3; j++, i++)
        e[i] = average(stud, j);
    printf("\n平均成绩：\n");
    for (i = 0; i < 3; i++)
        printf("  第%d门课程的平均成绩为：%f\n", i + 1, e[i]); //每门课程的平均成绩
    printf("\n");
    /*k = max(stud);
    printf("%d,%s,%f", stud[k].num, stud[k].name, stud[k].ave);
    for (i = 0; i < 3; i++)
        printf("%f", stud[k].score[i]);*/

    return 0;
}

void input(struct student stud[])
{
    int i, j;

    for (i = 0; i < numbers; i++)
    {
        printf("\n请输入第%d名学生的信息：\n", i + 1);
        printf("  学号：");
        scanf("%s", &stud[i].num);
        printf("  姓名：");
        scanf("%s", &stud[i].name); //勿出现空格
        for (j = 0; j < 3; j++)
        {
            printf("  第%d门课程成绩：", j + 1);
            scanf("%f", &stud[i].score[j]);
        }
    }
}

float average(struct student stud[], int j)
{
    int i;
    float ave1;
    float sum = 0;

    for (i = 0; i < numbers; i++)
    {
        sum += stud[i].score[j];
    }
    ave1 = sum / numbers;

    return ave1;
}

int max(struct student stud[])
{
    float sum[numbers], t, ave2; //sum:每个人的总成绩
    float b = 0;
    int i, j, k, a;

    for (i = 0, k = 0; i < 10 && k < 10; k++)
    {
        sum[k] = 0;
        for (j = 0; j < 3; j++)
            sum[k] += stud[i].score[j];
    }
    t = sum[0];
    for (j = 0; j < 3; j++)
        b += stud[a].score[j];
    ave2 = b / 3;
    stud[a].ave = ave2;

    return a;
}