/* ĳ�ſγ���60��ѧ������д����(Ҫ��ʹ�ýṹ��������ѧ������)��
(1) �Ӽ�����������ѧ����ѧ�š��������ɼ���
(2) ���㲢����γ̵�ƽ���ɼ���
(3) ���ɼ��Ӹߵ��͵�˳�����ѧ������(��������ѧ���������ͳɼ�);
(4) ������õ�ѧ������(����ѧ�š��������ɼ�)����ڴ����ļ�"stud.txt"�С� */
#include <stdio.h>

#define numbers 2

struct student
{
    int num;
    char name;
    float score[3];
    float ave;
} stud[numbers];

void input(struct student stud[]);           //��������
float average(struct student stud[], int j); //ƽ���ɼ�
int max(struct student stud[]);              //��߳ɼ�

int main()
{
    int i, j, k;
    float e[3];

    input(stud);
    for (j = 0, i = 0; j < 3 && i < 3; j++, i++)
        e[i] = average(stud, j);
    printf("\nƽ���ɼ���\n");
    for (i = 0; i < 3; i++)
        printf("  ��%d�ſγ̵�ƽ���ɼ�Ϊ��%f\n", i + 1, e[i]); //ÿ�ſγ̵�ƽ���ɼ�
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
        printf("\n�������%d��ѧ������Ϣ��\n", i + 1);
        printf("  ѧ�ţ�");
        scanf("%s", &stud[i].num);
        printf("  ������");
        scanf("%s", &stud[i].name); //����ֿո�
        for (j = 0; j < 3; j++)
        {
            printf("  ��%d�ſγ̳ɼ���", j + 1);
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
    float sum[numbers], t, ave2; //sum:ÿ���˵��ܳɼ�
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