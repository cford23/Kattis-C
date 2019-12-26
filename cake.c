// URL - https://open.kattis.com/problems/pieceofcake2
#include <stdio.h>

int main() {

    int sizes[4];
    int biggest;
    int n, h, v, k;
    scanf("%d %d %d", &n, &h, &v);

    sizes[0] = h * v * 4;
    sizes[1] = (n - h) * v * 4;
    sizes[2] = h * (n - v) * 4;
    sizes[3] = (n - h) * (n - v) * 4;

    biggest = sizes[0];
    for (k = 1; k < 4; k++) {
        if (sizes[k] > biggest)
            biggest = sizes[k];
    }

    printf("%d\n", biggest);

    return 0;
}