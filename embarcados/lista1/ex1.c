#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    //usa a estrutura do printf pra fazer o incremento usando o operador ++
    printf("O sucessor do número é: %d\n", ++n);
}
