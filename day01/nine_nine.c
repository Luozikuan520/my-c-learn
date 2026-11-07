#include<stdio.h>

/*
 *C99  不写返回值自动return 0
 */
int main(void)
{
    int i,j;
    for (i = 1;i <= 9;i++)
    {
        for (j = 1;j <=i;j++)
        {
            printf("%d * %d = %d  ",j,i,j*i);
        }
        printf("\n");
    }
}