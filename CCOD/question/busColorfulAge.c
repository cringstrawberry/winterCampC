#include <stdio.h>

int main(void)
{
    int age = 0, fee = 1000;
    scanf("%d", &age);

    if (age >= 14)
    {
        if (age <= 19)
        {
            fee -= 250;
        }
        else
        {
            fee = 1000;
        }
    }
    else
    {
        if (age >= 4)
        {
            fee -= 500;
        }
        else
        {
            fee = 0;
        }
    }

    printf("나이: %d, 최종요금: %d원", age, fee);

    return 0;
}