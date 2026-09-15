// 999999_AED1
// Arquivos
#include <stdio.h>
#include <stdlib.h> // para rand( ) e srand( )
#include <time.h>   // para funcoes com o tempo

/*
  Funcao principal.
 */
int main(void) 
{
  // definir dados
  srand(time(NULL)); // basta semear aleatoriedade uma vez
  FILE *a = fopen("DATA.TXT","w"); // abrir para gravar
  int   n = 6;
  int   b = 0;  
  
  // mostrar mensagem  
  printf("%s\n","999999_AED1"); 

  // gravar valores
  fprintf(a, "%d\n", n);      // guardar a quantidade
  for(int x = 0; x < n; x = x+1)
  {  fprintf(a, "%d\n", rand()%100); }
  fclose(a);                  // fechar (INDISPENSAVEL)
	 
  // ler valores 
  a = fopen("DATA.TXT","r");  // abrir para ler
  fscanf(a, "%d", &n);        // obter  a quantidade
  // ler e mostrar dados em arquivo
  printf("\nDados em arquivo:\n");
  for(int x = 0; x < n; x = x+1)
  {  
     fscanf(a, "%d", &b);
     printf("%d\n", b);
  }
  fclose(a);                  // fechar (RECOMNDAVEL)
  
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
Como os valores sao aleatorios,
as saidas poderao mudar a cada
execucao.

*/