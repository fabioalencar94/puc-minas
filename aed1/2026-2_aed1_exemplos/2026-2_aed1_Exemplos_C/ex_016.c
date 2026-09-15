// 999999_AED1
// Estrutura de dados
#include <stdio.h>
#include <stdlib.h>

// definir estrutura de dados global
struct s_array
{
  int  n;   // tamanho
  int *data;// referencia para espaco de armazenamento  
};

/*
  Funcao principal.
 */
int main(void) 
{
  // definir dados
  FILE *a = fopen("DATA.TXT","r");
  struct s_array b;
  
  // mostrar mensagem
  printf("%s\n","999999_AED1"); 

  // ler valores 
  a = fopen("DATA.TXT","r");
  fscanf(a, "%d", &b.n);
  b.data = malloc(b.n * sizeof(int));
  if(b.data != NULL)
  {
   // ler dados conforme quantidade
      for(int x = 0; x < b.n; x = x+1)
      {  fscanf(a, "%d", &b.data[x]);   }
      fclose(a);

   // mostrar valores
      printf("\nDados guardados:\n");
      for(int x = 0; x < b.n; x = x+1)
      {  printf("%2d\n",  b.data[x]);   }
      printf("\n");
  }

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
92
72
88
67
54

Apertar ENTER para terminar.

OBS.:
Como os valores sao aleatorios,
as saidas poderao mudar a cada
execucao.

*/
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

