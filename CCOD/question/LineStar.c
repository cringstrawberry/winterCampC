#include <stdio.h>

int main(void)
{
    int num = 0;
    scanf("%d", &num);

    if (num < 1 || num > 9)
    {
        printf("1~9 사이의 숫자를 입력하세요\n");
        return 0;
    }

    int i = 0;
    while (i < num)
    {
        putchar('*');
        ++i;
    }
    return 0;
}