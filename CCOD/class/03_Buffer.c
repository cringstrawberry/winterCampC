#include <stdio.h>

int main(void)
{
    char szBuffer[8] = {0};

    // gets(szBuffer);
    fgets(szBuffer, sizeof(szBuffer), stdin);
    puts(szBuffer);

    return 0;
}