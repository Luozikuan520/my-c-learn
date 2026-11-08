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

    // 1. 读取一行文本
    // fgets 会读取包括空格在内的所有字符，直到遇到换行符或达到 199 个字符
    fgets(str, sizeof(str), stdin);

    // 2. 读取要查找的字符
    // 注意：%c 前面的空格非常关键！它能吃掉 fgets 留下的换行符
    printf("查找字符: ");
    scanf(" %c", &target);

    // 3. 遍历字符串
    // 使用 strlen 获取实际长度（题目要求练习 strlen）
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];

        // 关键细节：遇到 \n 换行符直接退出循环，不把它算作空格
        if (ch == '\n')
        {
            break;
        }

        // 统计字母（大写或小写）
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            letter_count++;
        }
        // 统计数字
        else if (ch >= '0' && ch <= '9')
        {
            digit_count++;
        }
        // 统计空格
        else if (ch == ' ')
        {
            space_count++;
        }

        // 统计目标字符出现的次数
        if (ch == target)
        {
            target_count++;
        }
    }

    // 4. 按照题目要求格式输出
    printf("\n字母: %d\n", letter_count);
    printf("数字: %d\n", digit_count);
    printf("空格: %d\n", space_count);
    printf("字符 %c 出现: %d 次\n", target, target_count);

    return 0;
}
