#include <stdio.h>

int main() {
    double velocidade, raio, ac;
    float limite = 8.0;

    printf("Digite a velocidade do veiculo (m/s): ");
    scanf("%lf", &velocidade);

    printf("Digite o raio da curva (m): ");
    scanf("%lf", &raio);

    ac = (velocidade * velocidade) / raio;

    printf("\nAceleracao centripeta: %.2f m/s²\n", ac);

    if (ac <= limite)
        printf("Condicao: Segura\n");
    else
        printf("Condicao: Risco\n", limite);
}