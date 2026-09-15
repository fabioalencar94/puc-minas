#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 15;
    int y = 4;
    char c = 'A';
    bool cond;
    cond = (x % y == 3) || (c == 'B');
    x = cond ? x - y : x + y;
    if (c == 'A') {
        y = (x > 10) ? y * 2 : y + 5;

    } else {
        y = y - 3;
    }
    x = (y % 3 == 0) ? x / 3 : x + 2;
    printf("%d %d\n", x, y);
    // saida 13 e 8
    return 0; 
}