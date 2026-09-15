// 999999_AED1
// Alocacao de memoria
#include <stdio.h>
#include <stdlib.h>

/*
  Funcao principal.
 */
int main(void) 
{
  // definir dados
  FILE *a = fopen("DATA.TXT","r");
  int   n = 0;
  int  *b = NULL;  
  
  // mostrar mensagem  
  printf("%s\n","999999_AED1"); 

  // ler valores 
  a = fopen("DATA.TXT","r");
  fscanf(a, "%d", &n);
  // reservar espaco para guardar dados [n] inteiros
  b = malloc(n * sizeof(int));
  for(int x = 0; x < n; x = x+1)
  {  fscanf(a, "%d", &b[x]);   }
  fclose(a);
  
  // mostrar dados
  printf("\nDados em arquivo:\n");
  for(int x = 0; x < n; x = x+1)
  {  printf("%2d\n", b[x]);   }
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

Dados em arquivo:
35
77
29
36
76
94

Apertar ENTER para terminar.

OBS.:
Os dados dependem dos valores
gerados anteriormete.

*/
