// URL - https://open.kattis.com/problems/autori
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int k, length;
    int count = 0;
    char msg[100];
    char shortened[100] = "";
    scanf("%s", msg);
    length = strlen(msg);

    for (k = 0; k < length; k++) {
        if (isupper(msg[k])) {
            shortened[count] += msg[k];
            count++;
        }
        
    }

    printf("%s\n", shortened);

    return 0;
}