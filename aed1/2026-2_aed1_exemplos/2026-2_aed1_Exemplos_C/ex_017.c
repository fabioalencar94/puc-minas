// 999999_AED1
// Apontador (*)  para arranjo em estrutura
#include <stdio.h>
#include <stdlib.h>

// definir novo tipo global 
typedef
 struct s_array // inicio do descritor do tipo
 {
  int  n;
  int *data;
 }              // fim    do descritor do tipo
Array;          // nome do tipo

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
     // ler dados com apontadores
     fscanf(a, "%d", &(*b).n);
     (*b).data = malloc((*b).n * sizeof(int));
     for(int x = 0; x < (*b).n; x = x+1)
     {  fscanf(a, "%d", &(*b).data[x]);}
     fclose(a);

     // mostrar valores
     printf("\nDados guardados:\n");
     for(int x = 0; x < (*b).n; x = x+1)
     {  printf("%2d\n", (*b).data[x]); }
     printf("\n");
  }
  // dispensar area reservada
  free(b);
  printf("\n");

  // ler valores    (de novo, com outra notacao)
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
     {  fscanf(a, "%d", &b->data[x]);}
     fclose(a);

     // mostrar valores           (outra notacao)
     printf("\nDados guardados:\n");
     for(int x = 0; x < b->n; x = x+1)
     {  printf("%2d\n", b->data[x]); }
     printf("\n");
  }
  // dispensar area reservada
  free(b);
  printf("\n");

  // ler valores         (com mais outra notacao)
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

     // mostrar valores           (outra notacao)
     printf("\nDados guardados:\n");
     for(int x = 0; x < b->n; x = x+1)
     {  printf("%2d\n", *(b->data+x)); } // com *
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

Dados em arquivo:
35
77
29
36
76
94

Dados em arquivo:
35
77
29
36
76
94

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
gerados anteriormente.

*/
