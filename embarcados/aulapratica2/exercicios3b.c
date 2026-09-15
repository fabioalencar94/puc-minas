#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numero1, numero2;
    printf("Entre com um numero maior que 0: ");
    scanf("%i", &numero1);   
    printf("Entre com outro numero maior que 0: ");
    scanf("%i15", &numero2);
    int soma = numero1 + numero2;
    printf("A soma dos dois numeros é igual a: %d\n", soma);
    int quadradado1 = pow(numero1, 2);
    int quadradado2 = pow(numero2, 2);
    printf("Os quadrados dos numeros são: %d e %d\n", quadradado1, quadradado2);
    float media = (numero1 + numero2) / 2;
    printf("A média dos numeros é: %.2f\n", media);
}