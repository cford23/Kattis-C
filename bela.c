// URL - https://open.kattis.com/problems.bela
#include <stdio.h>

int main() {

    int hands, score, k;
    int total = 0;
    char dominant, num, suit;
    char card[2];
    scanf("%d %c", &hands, &dominant);
    hands = hands * 4;

    for (k = 0; k < hands; k++) {
        scanf("%s", card);
        num = card[0];
        suit = card[1];

        if (num == 'A')
            score = 11;
        else if (num == 'K')
            score = 4;
        else if (num == 'Q')
            score = 3;
        else if (num == 'T')
            score = 10;
        else if (num == '8')
            score = 0;
        else if (num == '7')
            score = 0;
        else if (num == 'J') {
            if (suit == dominant)
                score = 20;
            else
                score = 2;
        }
        else if (num == '9') {
            if (suit == dominant)
                score = 14;
            else
                score = 0;
        }

        total += score;
    }

    printf("%d\n", total);

    return 0;
}