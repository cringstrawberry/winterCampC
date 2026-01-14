#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;
    printf("두 정수를 입력하세요.: ");
    scanf("%d %d", &x, &y);

    // double avg = 0.0;
    // avg = (x + y) / 2.0;

    printf("AVG: %f.2f", (x + y) / 2.0);

    return 0;
}