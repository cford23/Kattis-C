// URL - https://open.kattis.com/problems/spavanac
#include <stdio.h>

int main() {

    int hour, minute;
    scanf("%d %d", &hour, &minute);

    if (minute >= 45)
        minute -= 45;
    else {
        if (hour == 0)
            hour = 23;
        else
            hour--;
        minute = 45 - minute;
        minute = 60 - minute;
    }

    printf("%d %d\n", hour, minute);

    return 0;
}