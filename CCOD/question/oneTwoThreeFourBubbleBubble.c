// 다시 풀기

#include <stdio.h>

int main(void)
{
    int array[5] = {3, 5, 1, 4, 2};

    for (int j = 0; j < 5; ++j)
    {
        for (int i = j + 1; i < 5; ++i)
        {
            if (array[j] > array[i])
            {
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
                }
        for (int i = 0; i < 5; ++i)
        {
            printf("%d\t", array[i]);
        }
        putchar('\n');
    }

    return 0;
}