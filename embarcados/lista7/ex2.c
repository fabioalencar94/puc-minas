#include <stdio.h>

void calcular_totais(int gols[4][3], int totais[4]) {
    for (int i = 0; i < 4; i++) {
        totais[i] = 0;
        for (int j = 0; j < 3; j++) {
            totais[i] += gols[i][j];
        }
    }
}

int achar_maior(int totais[4]) {
    int maior = 0;
    for (int i = 1; i < 4; i++) {
        if (totais[i] > totais[maior]) {
            maior = i;
        }
    }
    return maior;
}

int main() {
    char times[4][20] = {"Brasil", "Marrocos", "Haiti", "Escocia"};
    int gols[4][3];
    int totais[4];

    // (a) leitura
    for (int i = 0; i < 4; i++) {
        printf("Gols de %s (jogo 1, 2 e 3): ", times[i]);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &gols[i][j]);
        }
    }

    // (b) totais
    calcular_totais(gols, totais);

    printf("\n%-10s %5s %5s %5s %6s\n", "Selecao", "J1", "J2", "J3", "Total");
    printf("------------------------------------------\n");
    for (int i = 0; i < 4; i++) {
        printf("%-10s %5d %5d %5d %6d\n",
               times[i], gols[i][0], gols[i][1], gols[i][2], totais[i]);
    }

    // (c) maior pontuador
    int maior = achar_maior(totais);
    printf("\nSelecao com mais gols: %s (%d gols)\n", times[maior], totais[maior]);

    // (d) classificados: os 2 com maior total
    int primeiro = -1, segundo = -1;
    for (int i = 0; i < 4; i++) {
        if (primeiro == -1 || totais[i] > totais[primeiro]) {
            segundo = primeiro;
            primeiro = i;
        } else if (segundo == -1 || totais[i] > totais[segundo]) {
            segundo = i;
        }
    }

    printf("\nClassificados para a proxima fase:\n");
    printf("1. %s (%d gols)\n", times[primeiro], totais[primeiro]);
    printf("2. %s (%d gols)\n", times[segundo], totais[segundo]);

    return 0;
}