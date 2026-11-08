#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char str[200];
    char target;
    int letter_count = 0, digit_count = 0, space_count = 0, target_count = 0;

    fgets(str, sizeof(str), stdin);
    printf("查找字符: ");
    scanf(" %c", &target);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch == '\n')
        {
            break;
        }

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            letter_count++;
        }

        else if (ch >= '0' && ch <= '9')
        {
            digit_count++;
        }

        else if (ch == ' ')
        {
            space_count++;
        }

        if (ch == target)
        {
            target_count++;
        }
    }
    printf("\n字母: %d\n", letter_count);
    printf("数字: %d\n", digit_count);
    printf("空格: %d\n", space_count);
    printf("字符 %c 出现: %d 次\n", target, target_count);

    return 0;
}
