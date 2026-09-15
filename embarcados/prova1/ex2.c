#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    //scanf("%d %d", a, b);
    //a linha acima precida do & antes das variaveis para funcionar corretamente
    scanf("%d %d", &a, &b);

    //if(a = b){
    //a linha acima precisa do == para comparar corretamente as variaveis
    if (a == b){
        printf("Numeros iguais\n");
    //} else if (a > b);
    } else if (a > b)
    //} else if (a > b);
    // a linha acima para funcionar corretamente nao pode ter o ;
        printf("A eh maior\n");
    else
        printf("B eh maior\n");
        
    return 0;
}