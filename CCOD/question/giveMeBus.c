#include <stdio.h>

int main(void)
{
    int busCoin = 1000, age = 0;

    scanf("%d", &age);

    if (age > 20)
    {
        age = 20;
    }
    if (age < 20)
        busCoin -= 250;

    printf("나이: %d, 최종요금: %d원", age, busCoin);

    return 0;
}