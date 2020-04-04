/* ĳ�ſγ���60��ѧ������д����(Ҫ��ʹ�ýṹ��������ѧ������):
 * (1) �Ӽ��̼�������ѧ����ѧ�š��������ɼ���
 * (2) ���㲢����γ̵�ƽ���ɼ���
 * (3) ���ɼ��Ӹߵ��͵�˳�����ѧ������(��������ѧ���������ͳɼ�)��
 * (4) ������õ�ѧ������(����ѧ�š��������ɼ�)����ڴ����ļ�"stud.txt"��
 */
#include <stdio.h>
#define numb 3

struct student
{
    int num;        //ѧ��
    char name;      //����
    float score[3]; //�ɼ�(�ܹ����ſγ�)
    float ave;      //ƽ���ɼ�
} stud[numb];

void input(struct student stud[]);            //����
float average(struct student stud[], int j);  //��ƽ���ɼ�
void max(struct student stud[]);              //��ÿ��ѧ�����ܳɼ�
void QuickSort(float R[], int low, int high); //��������

int main()
{
    int i, j, k;
    float e[3];

    input(stud);

    printf("ƽ���ɼ���\n");
    for (j = 0; j < 3; j++)
    {
        e[j] = average(stud, j);
        printf("  ��%d�ſγ̵�ƽ���ɼ�Ϊ��%f\n", j + 1, e[j]);
    }
    max(stud);

    return 0;
}

void input(struct student stud[])
{
    int i, j;

    for (i = 0; i < numb; i++)
    {
        printf("�������%d��ѧ������Ϣ��\n", i + 1);
        printf("  ѧ�ţ�");
        scanf("%d", &stud[i].num);
        printf("  ������");
        scanf("%s", &stud[i].name);
        for (j = 0; j < 3; j++)
        {
            printf("  ��%d�ſγ̵ĳɼ���", j + 1);
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
        sum += stud[i].score[j]; //���j�ſγ̵��ܳɼ�
    ave1 = sum / numb;

    return ave1;
}

void max(struct student stud[])
{
    float sum[numb]; //���ÿ��ѧ�����ܳɼ�
    int i, j;

    printf("\n�ɼ�������\n  ѧ��    ����    �ɼ�          ����\n");
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