#include <stdio.h>
#define MAX_SIZE 5
#include <windows.h>
// 把函数声明放在 main 函数外面，更规范
int array_max(int a[]);
int array_min(int a[]);
double array_avg(int a[]);
void bubble_sort(int a[]);
int main(void)
{
    /*
     *局部变量函数命名冲突，没有a.length,
     *input输入6个最后一个留在缓冲区    数组作为参数传递给函数时，它会退化为指针
     *冒泡排序越界
     */
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001); // 关键：否则 scanf 读中文可能乱码
    int input[MAX_SIZE];
    printf("依次输入五个数:\n");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &input[i]);
    }
    printf("输入: ");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", input[i]);
    }
    printf("\n: ");
    printf("最大值%d\n: ", array_max(input));
    printf("最小值%d\n: ", array_min(input));
    printf("平均值%d\n: ", array_avg(input));
    bubble_sort(input);
    printf("排序:%d %d %d %d %d\n ",input[0],input[1],input[2],input[3],input[4]);
    return 0;
}

int array_max(int a[])
{
    int max_i = 0;
    int len = sizeof(a) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        if (a[i] > max_i)
        {
            max_i = a[i];
        }
    }
    return max_i;
}

double array_avg(int a[])
{
    int avg_i = 0;
    int count = 0;
    int len = sizeof(a) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        count = count + a[i];
    }
    avg_i = count / len;
    return avg_i;
}

int array_min(int a[])
{
    int min_i = 0;
    int len = sizeof(a) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        if (a[i] < min_i)
        {
            min_i = a[i];
        }
    }
    return min_i;
}

void bubble_sort(int a[])
{
    int swap;

    for (int i = 0; i < MAX_SIZE - 1; i++)
    {
        int sort_count = 0;
        for (int j = 0; j < MAX_SIZE - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
                sort_count++;
            }
        }
        if (sort_count == 0)
        {
            break;
        }
    }
}
