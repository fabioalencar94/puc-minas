#include <stdio.h>

int main() {
    int nota, frequencia;
    char extra;

    printf("Digite a nota do aluno (1 a 10) a frequencia (1 a 100) e se fez a atividade extra (S ou N):\n");

    scanf("%d %d %c", &nota, &frequencia, &extra);
    //testa o char da ativadade extra    
    if (extra != 'S' && extra != 'N' ) {
        printf("Caractere invalido.");
        return 0;
    }

    if (frequencia < 75) {
        printf("Reprovado por frequencia");
    } else if ( nota >= 7) {
        printf("Aprovado");
    } else if ( nota >= 5) {
        if (extra == 'S')
            printf("Aprovado com bonus");
        else {
            printf("Recuperacao");
        }        
    } else {
        printf("Reprovado por nota");
    }
    return 0;
}