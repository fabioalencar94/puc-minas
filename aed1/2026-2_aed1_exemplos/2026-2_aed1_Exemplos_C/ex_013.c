// 999999_AED1
// Matrizes
#include <stdio.h>
#include <stdlib.h>

/*
  Procedimento para mostrar matriz.
  @param m - quantidade de linhas
  @param n - quantidade de colunas
  @param v - referencia para matriz de inteiros
             OBS.: NECESSARIO colocar quantidade de colunas
 */
void print_matrix(int m, int n, int v[][n])
{
  for(int x=0; x < m; x=x+1)
  {
    for(int y=0; y < n; y=y+1)
    {  printf("%d ", v[x][y]);  }
    printf("\n");
  }
}

/*
  Procedimento para ler matriz.
  @param m - quantidade de linhas
  @param n - quantidade de colunas
  @param v - referencia para matriz de inteiros
             OBS.: NECESSARIO colocar quantidade de colunas
*/
void scan_matrix(int m, int n, int v[][n])
{
  for(int x=0; x < m; x=x+1)
  {
    for(int y=0; y < n; y=y+1)
    {  scanf("%d", &v[x][y]); getchar( );  }
    printf("\n");
  }
  printf("\n");
}

/*
  Funcao principal.
 */
int main(void)
{
  // definir dados
  int a [ ][3] = {{1,2,3},  // definir com valores
                  {4,5,6}};
  int b [2][3];             // espaco para matriz
                            // definir valores iniciais
  b[0][0] = 6; b[0][1] = 5; b[0][2] = 4;
  b[1][0] = 3; b[1][1] = 2; b[1][2] = 1;

  // mostrar mensagem
  printf("%s\n","999999_AED1");

  // aplicar metodos sobre em matrizeos
  printf("\nOperacoes com matrizes\n");
  // mostrar dados
  printf("a:\n");
  print_matrix(2,3, a);
  printf("\n");

  printf("b:\n");
  print_matrix(2,3, b);
  printf("\n");

  // ler dados para matriz
  printf("Entrar dados:\n");
  scan_matrix(2,3, a);
  printf("a:\n");
  print_matrix(2,3, a);
  printf("\n");

  // encerrar
  printf("%s\n","Apertar ENTER para terminar.");
  getchar( );
  return (0);
}
/*
  Testes e observacoes:
1. Teste simples
999999_AED1

Operacoes com matrizes
a:
1 2 3
4 5 6

b:
6 5 4
3 2 1

Entrar dados:
9
8
7

6
5
4


a:
9 8 7
6 5 4

Apertar ENTER para terminar.

*/
