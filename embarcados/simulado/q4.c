#include <stdio.h>

int main() {
    int mes, consumo;
    float acrescimo, tarifa, total;

    printf("Digite o mes (1 a 12) e o consumo: \n");
    scanf("%d %d", &mes, &consumo);

    // calcula o acrescimo
    if (consumo <= 100) {
        acrescimo = 0.0;
    } else if (consumo <= 300) {
        acrescimo = 0.10;
    } else {
        acrescimo = 0.20;
    }

    // define tarifa base
    switch (mes) {
        //meses de verao
        case 12:
        case 1:
        case 2:
            tarifa = 1.20;
            break;

        //meses de inverno    
        case 6:
        case 7:
        case 8:
            tarifa = 0.90;
            break;

        case 3:
        case 4:
        case 5:
        case 9:
        case 10:
        case 11:
            tarifa = 1.00;
            break;

        default:
            printf("Mes invalido.");
            return 0;
    }

    //calculo do total da conta
    total = consumo * (tarifa + acrescimo);

    printf("Valor total da conta: R$ %.2f\n", total);

    return 0;
}