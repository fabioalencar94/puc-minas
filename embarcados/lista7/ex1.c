#include <stdio.h>

int main() {
    int matriz[4][4], soma = 0, maior;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
            if (i == 0 || maior < matriz[i][j]) maior = matriz[i][j];
            soma += matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma: %d\n", soma);
    printf("Maior: %d\n", maior);
    return 0;
}