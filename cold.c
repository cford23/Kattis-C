// URL - https://open.kattis.com/problems/cold
#include <stdio.h>

int main() {

    int numbers, k, temp;
    int count = 0;
    scanf("%d", &numbers);

    for (k = 0; k < numbers; k++) {
        scanf("%d", &temp);
        if (temp < 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}