#include <stdio.h>

int main(void)
{
    int a = 0, data = 0;

    scanf("%d\n", &a);
    data += a;
    scanf("%d\n", &a);
    data += a;
    scanf("%d", &a);
    data += a;

    printf("Total: %d\n", data);

    return 0;
}