// 999999_AED1
// Apontador (->) para arranjo em estrutura
#include <stdio.h>
#include <stdlib.h>

// definir novo tipo global 
typedef
 struct s_array // descritor do tipo
 {
  int  n;
  int *data;  
 }
Array;          // nome do tipo

/*
  Procedimento para mostrar arranjo de inteiros.
  @param n - quantidade de dados
  @param v - estrutura com arranjo de inteiros
*/
void print_Array_1(Array v)
{
  for(int x=0; x < v.n; x=x+1)
  {  printf("%d ", v.data[x]);  }
  printf("\n");
}

/*
  Procedimento para mostrar arranjo de inteiros.
  @param n - quantidade de dados
  @param v - apontador para estrutura com arranjo de inteiros
*/
void print_Array_2(Array *v)
{
  for(int x=0; x < v->n; x=x+1)    // com ->
  {  printf("%d ", v->data[x]);  } // com ->
  printf("\n");
}

/*
  Funcao principal.
 */
int main(void)
{
  // definir dados
  FILE  *a = fopen("DATA.TXT","r");
  Array *b = NULL;

  // mostrar mensagem
  printf("%s\n","999999_AED1");

  // ler valores
  a = fopen("DATA.TXT","r");
  // reservar espaco para guardar dados
  b = malloc(1 * sizeof(Array));
  // testar se ha' espaco para guardar dados
  if (b != NULL)
  {
     // ler dados com apontadores (outra notacao)
     fscanf(a, "%d", &b->n);
     b->data = malloc(b->n * sizeof(int));
     for(int x = 0; x < b->n; x = x+1)
     {  fscanf(a, "%d",  (b->data+x)); } // sem &
     fclose(a);

     // mostrar valores por procedimento
     printf("\nDados guardados:\n");
     print_Array_1(*b);                  // com *
     printf("\n");
  }
  // dispensar area reservada
  free(b);
  printf("\n");

  // ler valores
  a = fopen("DATA.TXT","r");
  // reservar espaco para guardar dados
  b = malloc(1 * sizeof(Array));
  // testar se ha' espaco para guardar dados
  if (b != NULL)
  {
     // ler dados com apontadores (outra notacao)
     fscanf(a, "%d", &b->n);
     b->data = malloc(b->n * sizeof(int));
     for(int x = 0; x < b->n; x = x+1)
     {  fscanf(a, "%d", &(b->data[x])); } // com &
     fclose(a);

     // mostrar valores por procedimento
     printf("\nDados guardados:\n");
     print_Array_2(b);                    // sem *
     printf("\n");
  }
  // dispensar area reservada
  free(b);
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

Dados guardados:
35 77 29 36 76 94

Dados guardados:
35 77 29 36 76 94

Apertar ENTER para terminar.

OBS.:
Os dados dependem dos valores
gerados anteriormete.

*/
