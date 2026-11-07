#include<stdio.h>

int main()
{
    int input_number,i;
    int count = 0;
    printf("输入整数");
    scanf("%d",&input_number);
    for (i = 1;i <= input_number;i++)
    {
        if (input_number % i == 0)
        {
            count++;
        }

    }
    if (count == 2)
    {
        printf("%d是素数",input_number);

    }else
    {
        printf("%d是不是素数",input_number);

    }
}