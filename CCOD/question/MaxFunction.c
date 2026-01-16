#include <stdio.h>

int MaxResults(int a, int b, int c)
{
    if (a >= b)
    {
        if (a >= c)
            return a;
        else
            return c;
    }
    else if (b > c)
        return b;
    else
        return c;
}

int main(void)
{
    int a = 0, b = 0, c = 0;
    printf("세 정수 입력: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("세 정수의 최댓값은 다음과 같습니다. : %d", MaxResults(a, b, c));
    return 0;
}