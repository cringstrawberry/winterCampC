// 다시 풀기

#include <stdio.h>

int main(void)
{
    int cnt = 0;
    int array[5][5] = {0};

    for (int i = 0; i < 5; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 5; ++j)
            {
                array[i][j] = ++cnt;
            }
        }
        else
        {
            for (int j = 4; j >= 0; --j)
            {
                array[i][j] = ++cnt;
            }
        }

        for (int j = 0; j < 5; ++j)
        {
            printf("%d\t", array[i][j]);
        }
        putchar('\n');
    }
    return 0;
}