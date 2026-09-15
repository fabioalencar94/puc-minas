/*
Aluno: Fabio Guimaraes Alencar 
Matricula: 914866
AED1
*/

#include "io.h"
#include <math.h>

/* Protótipos */
void ex0501();
void ex0502();
void ex0503();
void ex0504();
void ex0505();
void ex0506();
void ex0507();
void ex0508();
void ex0509();
void ex0510();

int main() {

    int op;
    do {
        printf("Escolha o exercicio (1 a 10) ou 0 para sair.\n");
        scanf("%d", &op);
        switch (op) {
            case 0:
                break;
            case 1:
                ex0501();
                break;
            case 2:
                ex0502();
                break;
            case 3:
                ex0503();
                break;
            case 4:
                ex0504();
                break;
            case 5:
                ex0505();
                break;
            case 6:
                ex0506();
                break;
            case 7:
                ex0507();
                break;
            case 8:
                ex0508();
                break;
            case 9:
                ex0509();
                break;
            case 10:
                ex0510();
                break;
            default:
                printf("Exercicio invalido.\n");
                break;
        }

    } while (op != 0);
}

void ex0501() {
    int n = IO_readint("Digite a quantidade de numeros: ");
    for (int i = 1; i <= n; i++) {
        IO_printf("%d\t", i * 4);
    }
    IO_println("");
}

void ex0502() {
    int n = IO_readint("Digite a quantidade de numeros: ");
    for (int i = 1; i <= n; i++) {
        IO_printf("%d\t", i * 6);
    }
    IO_println("");
}

void ex0503() {
    int n = IO_readint("Digite a quantidade de numeros: ");
    for (int i = n; i > 0; i--) {
        IO_printf("%.0f\t", pow(4, i));
    }
    IO_println("");
}

void ex0504() {
    int n = IO_readint("Digite a quantidade de numeros: ");
    for (int i = 1; i <= n; i++) {
        double result = 1.0/(4*i);
        IO_printf("%.2f\t", result);
    }
    IO_println("");
}

// o enunciado pedia valores pares mas o exemplo usava impares, segui o exemplo
void ex0505() {
    int n = IO_readint("Digite a quantidade de numeros: ");
    int x = IO_readint("Digite um valor: ");
    for (int i = 0; i < n; i++) {
        if (i == 0) IO_print("1\t");
        else {
            double result = 1/(pow(x, 2 * i + 1));
            IO_printf("%.4f\t", result);
        }
    }
    IO_println("");
}
 
// num testa todos os canditados, cont controla quantos numeros ja foram encontrados
int f1 (int x) {
    int sum = 0, num = 4, cont = 0;
    while (cont < x) {
        if (num % 2 == 0 && num % 3 != 0){
            IO_printf("%d\t", num);
            sum+= num;
            cont++;
        }
        num++;
    }
    return sum;
}

void ex0506() {
    int sum  = f1(IO_readint("Digite a quantidade de valores: "));
    IO_printf("\nSoma = %d\n", sum);
}

double f2 (int x){
    double sum = 0.0;
    int cont = 0, num = 3;
    while (cont < x) {
        if (num % 3 == 0 && num % 5 != 0){
            IO_printf("1/%d\t", num);
            sum+= 1.0/num;
            cont++;
        }
        num++;
    }
    return sum;
}

void ex0507() {
    IO_printf("\nSoma = %.2f\n", f2(IO_readint("Digite a qunatidade de valores: ")));
}

// no enunciado, n = 5 retorna 6 valores mas preferi manter n definindo o numero de iteracoes 
int f3(int x){
    int num = 3, sum = 0;
    for (int i = 1  ; i <= x; i++){
        sum += num;
        IO_printf("%d\t", num);
        num += i;
    }
    return sum;
}

void ex0508() {
    IO_printf("\nSoma = %d\n", f3(IO_readint("Digite a qunatidade de valores: ")));
}

void ex0509() {
    int n = IO_readint("Digite a quantidade de valores: ");
    int sum = 0;
    float num = 0.0;
    for (int i = 2; i <= n+1; i++){
        num = pow(i, 2);
        IO_printf("%.0f\t", num);
        sum += num;
    }
        IO_printf("\nSoma = %d\n", sum);
}

// den calcula o denominador 
float f5(int x) {
    float sum = 0;
    int den = 4 + (x - 1) * x / 2;

    for (int i = x - 1; i >= 0; i--) {
        IO_printf("1/%d\t", den);
        sum += 1.0 / den;
        den -= i;
    }
    return sum;
}

void ex0510() {
    IO_printf("\nSoma = %.0f\n", f5(IO_readint("Digite a qunatidade de valores: ")));
}