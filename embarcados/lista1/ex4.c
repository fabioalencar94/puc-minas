#include <stdio.h>
#include <stdlib.h>

int main() {
    float notaA, notaB, notaC, soma, produto;

    printf("Digite o valor de nota A: \n");
    scanf("%f", &notaA);
    printf("Digite o valor de nota B: \n");
    scanf("%f", &notaB);
    printf("Digite o valor de nota C: \n");
    scanf("%f", &notaC);

    soma = notaA + notaB + notaC;
    produto = notaA * notaB * notaC;

    printf("A soma %.2f, a média %.2f e o produto %.2f", soma, soma/3, produto);
    return 0;
}