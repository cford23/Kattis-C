// URL - https://open.kattis.com/problems/twostones
#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    if (num % 2 == 1)
        printf("Alice\n");
    else
        printf("Bob\n");

    return 0;
}