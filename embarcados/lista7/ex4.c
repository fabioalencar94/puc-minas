#include <stdio.h>

int main() {
    int matriz[6][6], pares = 0, impares = 0;

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) pares++;
            else impares++;
        }
    }
    
    printf("Pares: %d\n", pares);
    printf("Impares: %d", impares);
}