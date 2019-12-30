// URL - https://open.kattis.com/problems/zamka
#include <stdio.h>

int sumDigits(int number) {
    int sum = 0;
    int remainder;
    while (number > 0) {
        remainder = number % 10;
        sum += remainder;
        number = number / 10;
    }
    return sum;
}

int main() {

    int L, D, X, N, M, k;
    scanf("%d", &L);
    scanf("%d", &D);
    scanf("%d", &X);

    // Set N to be highest number in range
    // Set M to be lowest number in range
    N = D;
    M = L;

    // for N
    for (k = L; k <= D; k++) {
        if (X == sumDigits(k)) {
            if (k < N)
                N = k;
        }
    }

    // for M
    for (k = D; k >= L; k--) {
        if (X == sumDigits(k)) {
            if (k > M)
                M = k;
        }
    }

    printf("%d\n%d\n", N, M);

    return 0;
}