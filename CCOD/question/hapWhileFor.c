#include <stdio.h>

int main(void)
{

    int i = 1, hapwhile = 0;
    while (i < 11)
    {
        hapwhile += i;
        ++i;
    }
    printf("total: %d\n", hapwhile);

    int hapfor = 0;
    for (int j = 1; j < 11; ++j)
        hapfor += j;

    printf("total2: %d", hapfor);

    return 0;
}