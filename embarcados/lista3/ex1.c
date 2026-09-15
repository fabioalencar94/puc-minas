#include <stdio.h>

int main() {
    int id, access;
    printf("Digite seu ID e seu nivel de acesso:\n");
    scanf("%d %d", &id, &access); 

    //testa seu o id eh valido
    if (id >= 1000 && id <= 9999){
        
        //swtich para verificar nivel de acesso, default = invalido
        switch(access) {
            case 1:
                printf("Nivel de acesso: Basico");
                break;
            case 2:
                printf("Nivel de acesso: Tecnico");
                break;
            case 3:
                printf("Nivel de acesso: Total");
                break;
            default:
                printf("Id invalido.");    
            }   
    } else {
        printf("Acesso negado.");
    }
}