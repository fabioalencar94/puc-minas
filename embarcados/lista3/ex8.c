#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Digite dois valores: ");
    scanf("%lf %lf", &a, &b);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    //switch para definir a conta realizada com base no caracter da operacao
    switch (op) {
        case '+':
            printf("Resultado: %.2f\n", a + b);
            break;
        case '-':
            printf("Resultado: %.2f\n", a - b);
            break;
        case '*':
            printf("Resultado: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Erro: divisao por zero.\n");
            else
                printf("Resultado: %.2f\n", a / b);
            break;
        default:
            printf("Erro: operador invalido.\n");
    }
}