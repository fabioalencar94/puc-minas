// 999999_AED1
// Enumeracoes
#include <stdio.h>
#include <string.h>

// definir enumeracao global (constantes em sequencia)
enum Semana
{ Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado };

// definir enumeracao como novo tipo global
typedef
  enum s_Semana   // descritor
  { domingo, segunda, terca, quarta, quinta, sexta, sabado }
Dias_da_Semana; // nome

/*
  Funcao principal.
 */
int main(void) 
{
  // definir dados
  char Semana_str_1[7][8]; // para guardar lista de nomes

  strcpy(Semana_str_1[Domingo], "Domingo");
  strcpy(Semana_str_1[Segunda], "Segunda");
  strcpy(Semana_str_1[Terca  ], "Terca  ");
  strcpy(Semana_str_1[Quarta ], "Quarta ");
  strcpy(Semana_str_1[Quinta ], "Quinta ");
  strcpy(Semana_str_1[Sexta  ], "Sexta  ");
  strcpy(Semana_str_1[Sabado ], "Sabado ");

  // definir dados
  char Semana_str_2[ ][8] // para guardar lista de nomes
  = {"domingo",
     "segunda",
     "terca  ",
     "quarta ",
     "quinta ",
     "sexta  ",
     "sabado "};

  // mostrar mensagem
  printf("%s\n","999999_AED1"); 

  // mostrar valores 
  printf("\nMostrar dias da semana:\n");
  for(enum Semana dia=Domingo; dia<=Sabado; dia=dia+1)
  {
     printf("%d: %s\n", dia, Semana_str_1[dia]);
  }
  printf("\n");

  // mostrar valores
  printf("\nMostrar dias da semana:\n");
  for(Dias_da_Semana dia=Domingo; dia<=Sabado; dia=dia+1)
  {
     printf("%d: %s\n", dia, Semana_str_2[dia]);
  }
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

Mostrar dias da semana:
0: Domingo
1: Segunda
2: Terca
3: Quarta
4: Quinta
5: Sexta
6: Sabado


Mostrar dias da semana:
0: domingo
1: segunda
2: terca
3: quarta
4: quinta
5: sexta
6: sabado

Apertar ENTER para terminar.

*/
