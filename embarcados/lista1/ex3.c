#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y, aux;
    
    printf("Digite o valor de x: \n");
    scanf("%f", &x);
    printf("Digite o valor de y: \n");
    scanf("%f", &y);

    //variavel auxiliar pra guardar o valor de y e realizar a troca
    aux = y;
    y = x;
    x = aux;

    printf("As variaveis invertidas x = %.2f e y = %.2f", x, y);
    return 0;
}