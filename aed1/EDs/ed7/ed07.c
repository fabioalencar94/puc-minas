/*
Aluno: Fabio Guimaraes Alencar 
Matricula: 914866
AED1
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "io.h"

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();

int main() {
    int op;
    do {
        op = IO_readint("Escolha o exercicio (1 a 10) ou 0 para sair.\n");
        switch (op) {
            case 0: break;
            case 1: ex1(); break;
            case 2: ex2(); break;
            case 3: ex3(); break;
            case 4: ex4(); break;
            case 5: ex5(); break;
            case 6: ex6(); break;
            case 7: ex7(); break;
            case 8: ex8(); break;
            case 9: ex9(); break;
            case 10: ex10(); break;
            default: printf("Exercicio invalido.\n"); break;
        }
    } while (op != 0);
}

void ex1() {
    int n = IO_readint("Digite a quantidade de valores: ");

    FILE* file = fopen("DADOS0711.txt", "wt");
    for (int i = 1; i <= n; i++) {
        IO_fprintf(file, "%d\t", 3 * (2*i - 1));
    }
    fclose(file);
}

void ex2() {
    int n = IO_readint("Digite a quantidade de valores: ");

    FILE* file = fopen("DADOS0712.txt", "wt");
    for (int i = n; i > 0; i--){
        IO_fprintf(file, "%d\t", 4 * i);
    }
    fclose(file);  
}

void ex3() {
    int n = IO_readint("Digite a quantidade de valores: ");

    FILE* file = fopen("DADOS0713.txt", "wt");
    for (int i = 1; i <= n; i++){
        IO_fprintf(file, "%.0f\t", pow(4, i));
    }
    fclose(file);
}

void ex4() {
    int n = IO_readint("Digite a quantidade de valores: ");

    FILE* file = fopen("DADOS0714.txt", "wt");
    for(int i = n; i >= 0; i--){
        IO_fprintf(file, "%f\t", (1.0 / pow(4, i)));
    }
    fclose(file);
}

void ex5() {
    int n = IO_readint("Digite a quantidade de valores: ");
    int x = IO_readint("Digite o valor de x: ");

    FILE* file = fopen("DADOS0715.txt", "wt");
    for(int i = 0; i <= n; i++){
        IO_fprintf(file, "%f\n", (1.0 / pow(x, i*2)));
    }
    fclose(file);
}

void ex6() {
    int n = IO_readint("Digite a quantidade de valores: ");
    double value = 0.0, soma = 0.0;

    FILE* file15 = fopen("DADOS0715.txt", "rt");


    //testa se o arquivo do ex5 ja existe
    if (file15 == NULL) {
        IO_printf("Erro: arquivo nao encontrado. Execute o exercicio 5 primeiro.\n");
        return; 
    }

    FILE* fileResultado = fopen("RESULTADO06.txt", "wt");

    for (int i = 0; i < n; i++) {
        IO_fscanf(file15, "%lf", &value);
        soma += value;
    }

    IO_fprintf(fileResultado, "%f", soma);

    fclose(fileResultado);
    fclose(file15);

}

void ex7() {
    int n = IO_readint("Digite a quantidade de valores: ");
    double value = 0.0, soma = 0.0;

    FILE* file14 = fopen("DADOS0714.txt", "rt");

    if (file14 == NULL) {
        IO_printf("Erro: arquivo nao encontrado. Execute o exercicio 5 primeiro.\n");
        return; 
    }

    FILE* fileResultado = fopen("RESULTADO07.txt", "wt");

    for (int i = 0; i < n; i++) {
        IO_fscanf(file14, "%lf", &value);
        soma += value;
    }

    IO_fprintf(fileResultado, "%f", soma);

    fclose(fileResultado);
    fclose(file14);

}

void ex8() {
    int n = IO_readint("Digite a quantidade de valores: ");
    int ultimo = 1, anterior = 0;

    FILE* file = fopen("RESULTADO08.txt", "wt");

    for (int i = 1; i <= n; i++){
        int proximo = anterior + ultimo;
        anterior = ultimo;
        ultimo = proximo;
        if (proximo % 2 == 0) {
            IO_fprintf(file, "%d\t", proximo);
            IO_printf("%d\n", proximo);
        }
        // se o termo nao for par nao conta a iteraçao
        else {
            i--;
        }
    }
    fclose(file);     
}

void createFile(chars fileName) {
    IO_println("Digite cadeias de caracteres para preencher o arquivo ou PARAR para terminar");

    FILE* arquivo = fopen(fileName, "wt");
    chars linha = IO_new_chars(STR_SIZE);

    do {
        strcpy(linha, IO_readln(""));
        if (strcmp("PARAR", linha) != 0) {
            IO_fprintf(arquivo, "%s\n", linha);
        }
    } while(strcmp("PARAR", linha) != 0);

    fclose(arquivo);
}

void ex9() {
    int qnt = 0;
    createFile("CadeiasEX9.txt");

    FILE* input = fopen("CadeiasEX9.txt", "rt");
    FILE* file = fopen("RESULTADO09.txt", "wt");

    chars linha = IO_new_chars(STR_SIZE);
    strcpy(linha, IO_freadln(input));

    while(!feof(input)){
        qnt = 0;
        for (int i = 0; i < IO_length(linha); i++) {
            if (IO_charAt(linha, i) >= 'a' && IO_charAt(linha, i) <= 'z') qnt++;
        }
        IO_fprintf(file, "Cadeia: %s\tminusculas: %d\n", linha, qnt);
        strcpy(linha, IO_freadln(input));
    }

    fclose(file);
    fclose(input);
}

void ex10() {
    int qnt = 0;
    chars cadeia = IO_readln("Digite uma cadeia de caracteres: ");

    FILE* file = fopen("RESULTADO10.txt", "wt");

    for (int i = 0; i < IO_length(cadeia); i++){
        if (IO_charAt(cadeia, i) <= '6' && IO_charAt(cadeia, i) >= '0') qnt++;
    }

    IO_fprintf(file, "Quantiadade de digitos <= 6: %d", qnt);
    fclose(file);
}