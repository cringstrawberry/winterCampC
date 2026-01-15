#include <stdio.h>

int main(void)
{
    int input = 0, max = 0;
    scanf("%d", &input);
    max = input;

    scanf("%d", &input);
    max = (input > max) ? input : max;

    scanf("%d", &input);
    max = (input > max) ? input : max;

    printf("MAX: %d", max);

    return 0;
}