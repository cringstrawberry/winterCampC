// 다시 풀기
#include <stdio.h>

int main(void)
{
    int array[5] = {30, 40, 10, 50, 20};
    int idxMin = 0;

    for (int i = 0; i < 5; ++i)
    {
        printf("%d\t", array[i]);
    }
    putchar('\n');

    for (int j = 0; j < 5; ++j)
    {
        idxMin = j;
        for (int i = j + 1; i < 5; ++i)
        {
            if (array[idxMin] > array[i])
            {
                idxMin = i;
            }
        }

        if (idxMin != j)
        {
            int tmp = array[j];
            array[j] = array[idxMin];
            array[idxMin] = tmp;
        }

        for (int i = 0; i < 5; ++i)
        {
            printf("%d\t", array[i]);
        }
        putchar('\n');
    }

    return 0;
}