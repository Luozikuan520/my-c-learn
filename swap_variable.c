#include <stdio.h>
#include <windows.h>

void swap_1(int x,int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}
void swap_2(int *x,int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int a = 10,b = 20;
    printf("输入：");
    swap_1(a,b);
    printf("交换后：a = %d,b = %d",a,b);
    swap_2(&a,&b);
    printf("交换后：a = %d,b = %d",a,b);
}