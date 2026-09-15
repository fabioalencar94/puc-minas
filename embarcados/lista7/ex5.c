#include <stdio.h>

int main() {
    char jogador1[50], jogador2[50];
    char tabuleiro[3][3];
    char vencedor = '-';

    scanf("%s", jogador1);
    scanf("%s", jogador2);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            scanf(" %c", &tabuleiro[i][j]);

    // linhas e colunas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != '-')
            vencedor = tabuleiro[i][0];
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != '-')
            vencedor = tabuleiro[0][i];
    }

    // diagonal principal
    int ok = 1;
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][i] != tabuleiro[0][0] || tabuleiro[0][0] == '-') {
            ok = 0;
            break;
        }
    }
    if (ok) vencedor = tabuleiro[0][0];

    // diagonal secundaria
    ok = 1;
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][2-i] != tabuleiro[0][2] || tabuleiro[0][2] == '-') {
            ok = 0;
            break;
        }
    }
    if (ok) vencedor = tabuleiro[0][2];

    if (vencedor == 'O')
        printf("%s venceu!\n", jogador1);
    else if (vencedor == 'X')
        printf("%s venceu!\n", jogador2);
    else
        printf("Velha!\n");

    return 0;
}