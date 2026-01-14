#include <stdio.h>

int main(void)
{
    int seconds = 0;
    printf("초 단위 시간을 입력하세요: ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingSeconds = seconds - hours * 3600 - minutes * 60;

    printf("%d초는 %d시간 %d분 %d초 입니다.\n", seconds, hours, minutes, remainingSeconds);

    return 0;
}