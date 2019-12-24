// URL - https://open.kattis.com/problems/bijele
#include <stdio.h>

int main() {

    int kings, queens, rooks, bishops, knights, pawns;
    scanf("%d %d %d %d %d %d", &kings, &queens, &rooks, &bishops, &knights, &pawns);

    kings = 1 - kings;
    queens = 1 - queens;
    rooks = 2 - rooks;
    bishops = 2 - bishops;
    knights = 2 - knights;
    pawns = 8 - pawns;

    printf("%d %d %d %d %d %d\n", kings, queens, rooks, bishops, knights, pawns);

    return 0;
}