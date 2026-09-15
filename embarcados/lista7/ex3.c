#include <stdio.h>

int main() {
    int matriz[5][5], diagonalP = 0, diagonalS = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j) diagonalP += matriz[i][j];
            if (i + j == 4) diagonalS += matriz[i][j];
        }
    }

    diagonalP > diagonalS ? 
        printf("Soma da diagonal principal eh maior.") :
        printf("Soma da diagonal secundaria eh maior.");

    return 0;

}