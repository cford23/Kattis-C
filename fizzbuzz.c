// URL - https://open.kattis.com/problems/fizzbuzz
#include <stdio.h>

int main() {

    int fizz, buzz, numbers, k;
    scanf("%d %d %d", &fizz, &buzz, &numbers);

    for (k = 1; k <= numbers; k++) {
        if (k % fizz == 0 && k % buzz == 0)
            printf("FizzBuzz\n");
        else if (k % fizz == 0)
            printf("Fizz\n");
        else if (k % buzz == 0)
            printf("Buzz\n");
        else
            printf("%d\n", k);
    }

    return 0;
}