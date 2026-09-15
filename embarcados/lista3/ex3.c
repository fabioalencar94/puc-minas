#include <stdio.h>

int main() {
    int idade, bpm;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua frequencia cardiaca (bpm): ");
    scanf("%d", &bpm);

    //testa a idade no if externo e a situcao usando as faixas nos internos
    if (idade <= 17) {
        if (bpm >= 70 && bpm <= 100) {
            printf("Situacao: Normal\n");
        } else if ((bpm >= 60 && bpm < 70) || (bpm > 100 && bpm <= 110)) {
            printf("Situacao: Atencao\n");
        } else {
            printf("Situacao: Critica\n");
        }

    } else if (idade <= 59) {
        if (bpm >= 60 && bpm <= 100) {
            printf("Situacao: Normal\n");
        } else if ((bpm >= 50 && bpm < 60) || (bpm > 100 && bpm <= 110)) {
            printf("Situacao: Atencao\n");
        } else {
            printf("Situacao: Critica\n");
        }

    } else {
        if (bpm >= 60 && bpm <= 100) {
            printf("Situacao: Normal\n");
        } else if ((bpm >= 50 && bpm < 60) || (bpm > 100 && bpm <= 115)) {
            printf("Situacao: Atencao\n");
        } else {
            printf("Situacao: Critica\n");
        }
    }
}