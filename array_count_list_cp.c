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
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int input[MAX_SIZE];

    for (int i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &input[i]);
    }

    // 严格按照题目要求的格式输出
    printf("最大值：%d\n", array_max(input));
    printf("最小值：%d\n", array_min(input));
    printf("平均值：%.2f\n", array_avg(input)); // %.2f 保留两位小数

    bubble_sort(input);
    printf("排序：");
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", input[i]);
    }
    printf("\n");

    return 0;
}

int array_max(int a[])
{
    int max_val = a[0]; // 初始化为第一个元素，防止全负数出错
    for (int i = 1; i < MAX_SIZE; i++) // 从 1 开始比较
    {
        if (a[i] > max_val)
        {
            max_val = a[i];
        }
    }
    return max_val;
}

int array_min(int a[])
{
    int min_val = a[0]; // 初始化为第一个元素
    for (int i = 1; i < MAX_SIZE; i++)
    {
        if (a[i] < min_val)
        {
            min_val = a[i];
        }
    }
    return min_val;
}

double array_avg(int a[])
{
    int sum = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        sum += a[i];
    }
    return (double)sum / MAX_SIZE; // 强转为浮点数保留小数
}

void bubble_sort(int a[])
{
    for (int i = 0; i < MAX_SIZE - 1; i++)
    {
        int sort_count = 0;
        for (int j = 0; j < MAX_SIZE - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
                sort_count++;
            }
        }
        if (sort_count == 0) // 如果一次都没交换，说明已经有序
        {
            break;
        }
    }
}