// URL - https://open.kattis.com/problems/grassseed
#include <stdio.h>

int main() {

    float cost, width, length;
    int lawns, k;
    float totalCost = 0;
    scanf("%f", &cost);
    scanf("%d", &lawns);

    for (k = 0; k < lawns; k++) {
        scanf("%f %f", &width, &length);
        totalCost += width * length * cost;
    }

    printf("%f\n", totalCost);

    return 0;
}