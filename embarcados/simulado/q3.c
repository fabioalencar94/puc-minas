#include <stdio.h>

int main() {
    int ingressos, idade, total = 0;
    char tipoIngresso;

    printf("Quantos ingressos você deseja adquirir (1 a 3): \n");
    scanf("%d", &ingressos);

    //Teste quantidade de ingressos
    if (ingressos < 1 || ingressos > 3) {
        printf("Quantidade invalida.");
        return 0;
    }

    // Ingresso 1
    if (ingressos >= 1) {
        printf("Digite sua idade e o tipo do ingresso (I ou M): \n");
        scanf("%d %c", &idade, &tipoIngresso);

        //testa tipo de ingresso
        if (tipoIngresso != 'I' && tipoIngresso != 'M') {
            printf("Tipo de ingresso invalido.");
            return 0;
        }

        //testa se a a pessoa esta apta a meia entrada
        if (idade <= 12 || idade > 60 || tipoIngresso == 'M')
            total += 20;
        else
            total += 40;
    }

    // Ingresso 2
    if (ingressos >= 2) {
        printf("Digite sua idade e o tipo do ingresso (I ou M): \n");
        scanf("%d %c", &idade, &tipoIngresso);

        if (tipoIngresso != 'I' && tipoIngresso != 'M') {
            printf("Tipo de ingresso invalido.");
            return 0;
        }

        if (idade <= 12 || idade > 60 || tipoIngresso == 'M')
            total += 20;
        else
            total += 40;
    }

    // Ingresso 3
    if (ingressos == 3) {
        printf("Digite sua idade e o tipo do ingresso (I ou M): \n");
        scanf("%d %c", &idade, &tipoIngresso);

        if (tipoIngresso != 'I' && tipoIngresso != 'M') {
            printf("Tipo de ingresso invalido.");
            return 0;
        }

        if (idade <= 12 || idade > 60 || tipoIngresso == 'M')
            total += 20;
        else
            total += 40;
    }

    printf("Custo total do(s) ingresso(s): R$ %d\n", total);

    return 0;
}