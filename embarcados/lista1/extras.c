#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float imc() {
    float peso, imc, altura;

    printf("Entre com seu peso em kg: ");
    scanf("%f", &peso);
    printf("Entre com usa altura em metros: ");
    scanf("%f", &altura);
    imc =  (peso / (altura * altura));
    printf("Seu IMC é %.2f", imc );
}


float converter() {
    float fahrenheit, celsius;
    printf("Entre com a temperatura em fahrenheit:");
    scanf("%f", &fahrenheit);
    celsius = (5.0/9.0) * (fahrenheit - 32);
    printf("%.2f F equivale a %.2f C.\n", fahrenheit, celsius);
}

int inverter(){
    char num[3];
    char numInverted[3];
    printf("Entre com uma numero de 3 digitos: ");
    scanf("%s", num);
    for(int i = 0; i < 3; i++){
        numInverted[i] = num[2-i]; 
    }
    printf("O numero invertido é: %s", numInverted);
}

int calendarConverter(){
    int days, years, weeks;
    char resp[50] = "";
    printf("Entre com a quantidade de dias: ");
    scanf("%d", &days);
    sprintf(resp + strlen(resp), "%d dias equivale a ", days);
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((365 * years) + (weeks * 7)); 
    sprintf(resp + strlen(resp), "%d ano(s), ", years);
    sprintf(resp + strlen(resp), "%d semanas, ", weeks);
    sprintf(resp + strlen(resp), "%d dias.", days);
    printf("%s", resp);
}

int main() {
    //imc();
    //converter();
    //inverter();
    calendarConverter();
    return 0;
}
