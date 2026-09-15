#include <stdio.h>

int main() {
    int k, l, menorFator;
    
    do {
        scanf("%d", &k);
        scanf("%d", &l);
        if(l == 0 && k == 0) break;

        for (int i = 2; i < k; i++) {
            if (k % i == 0) {
                menorFator = i;
                break;
            }
        }
        menorFator >= l ? printf("GOOD\n") : printf("BAD %d\n", menorFator);
    } while (1);
}