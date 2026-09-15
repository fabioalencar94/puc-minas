#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4)/10;
    printf("Media: %.1f\n", media);
    
    if (media >= 7.0) printf("Aluno aprovado.");
    else if (media < 5.0) printf("Aluno reprovado.");
    else {
        float exame;
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media = (media + exame)/2;
        media > 4.9 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
        printf("Media final: %.1f", media);
    }
}