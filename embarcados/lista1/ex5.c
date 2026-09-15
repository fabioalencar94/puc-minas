#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main() {
    float capital, taxa, total;
    int periodo;

    printf("Digite o valor investido: \n");
    scanf("%f" , &capital);
    printf("Digite a taxa de juros: \n");
    scanf("%f" , &taxa);
    printf("Digite o periodo em meses: \n");
    scanf("%d", &periodo);

    // calculo do total usando a formula do juros composto
    total = capital * (pow((1 + taxa/100), periodo));

    printf("O valor total acumulado é: %.2f\n", total);
    printf("O valor de juros rendidos é: %.2f", total-capital);
    return 0;
}