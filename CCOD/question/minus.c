#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    int result = ~b + 1;
    printf("a - b = %d\n", a + result);
    return 0;
}