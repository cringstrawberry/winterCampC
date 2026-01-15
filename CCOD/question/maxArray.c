// #include <stdio.h>

// int main(void)
// {
//     int array[5] = {50, 40, 10, 50, 20};
//     int max = 0;

//     for (int i = 0; i < 5; ++i)
//     {
//         if (max < array[i])
//         {
//             max = array[i];
//         }
//     }
//     printf("MAX: %d", max);
//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int array[5] = {3, 4, 1, 5, 2};
    int min = array[0];

    for (int i = 0; i < 5; ++i)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }

    printf("MIN: %d", min);

    return 0;
}