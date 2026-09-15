#include <stdio.h>

int main() {
    float salario, parcela;

    printf("Digite seu salario:\n");
    scanf("%f", &salario);

    printf("Digite o valor da parcela do financiamento:\n");
    scanf("%f", &parcela);

    //usa um ternario para calcular e printar 
    parcela <= salario * 0.30 ? printf("Aprovado") : printf("Reprovado"); 
}
