#include <stdio.h>

int main() {
    int tipo;
    float distancia, acrescimo, total;

    printf("Digite o tipo de veiculo (1-carro, 2-moto, 3-van): ");
    scanf("%d", &tipo);

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);

    // define o acrescimo
    if (distancia > 30) {
        acrescimo = 1.20;
    } else if (distancia > 10) {
        acrescimo = 1.10;
    } else {
        acrescimo = 1.0;
    }

    // switch pro tipo de veiculo
    switch (tipo) {
        case 1:
            total = distancia * 2.0 * acrescimo;
            printf("Valor total: R$ %.2f\n", total);
            break;

        case 2:
            total = distancia * 1.0 * acrescimo;
            printf("Valor total: R$ %.2f\n", total);
            break;

        case 3:
            total = distancia * 3.0 * acrescimo;
            printf("Valor total: R$ %.2f\n", total);
            break;

        // default para tipo de veiculo invalido     
        default:
            printf("ERRO: tipo de veiculo invalido\n");
    }
    return 0;
}