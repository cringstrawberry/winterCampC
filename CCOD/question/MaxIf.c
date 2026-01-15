#include <stdio.h>

int main(void)
{
    int input = 0, max = 0;
    scanf("%d", &input);
    if (input > max)
        max = input;
    scanf("%d", &input);
    if (input > max)
        max = input;

    scanf("%d", &input);
    if (input > max)
        max = input;

    printf("MAX: %d", max);

    return 0;
}