#include <stdio.h>

int main() {
    float altura, imc;
    int peso;

    printf("Digite seu peso em kg e sua altura em metros: ");
    scanf("%d %f", &peso, &altura);

    //calculo do IMC
    imc = peso / (altura * altura);

    //testa as faixas de peso
    if (imc < 18.5) printf("Abaixo do peso.");
    else if (imc >= 18.5 && imc <= 24.9) printf("Peso normal.");
    else printf("Acima do peso.");
}