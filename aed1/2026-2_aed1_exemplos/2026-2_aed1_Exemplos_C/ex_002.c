// 999999_AED1
// Converter, operar e mostrar dados com formatos
#include <stdio.h>
#include <stdbool.h> // biblioteca para tipo logico

/*
  Funcao principal.
 */
int main(void)
{
  // definir dados
  char   x        = 'A'  ; // caractere 'A' (#65)
  int    y        =  5   ; // inteiro
  double z        = 1.2  ; // real

  // outros dados
  bool   status   = false; // logico
  int    contador = 0    ; // inteiro
  float  valor_1  = 0.00f; // real de precisao simples
  double valor_2  = 0.00 ; // real de precisao dupla
  char   simbolo  = '0'  ; // caractere zero (#48)

  // iniciar
  printf ("%s\n","999999_AED1");

  printf("\nConversoes entre tipos\n");
  // conformar tipos (type casting)
  y = (int) z;          // truncar para parte inteira
  printf ("z = %lf\t y = %d\n", z, y );
  y = (int) x;          // obter codigo do simbolo
  printf ("x = %c \t y = %d\n", x, y );
  y = x;                // conformacao implicita
  printf ("x = %c \t y = %d\n", x, y );
  printf ("\n");        // mudar de linha

  x = (char) (32+y);    // obter simbolo a partir do codigo
  printf ("y = %d \t x = %c\n", (32+y), x );
  x = (char) (48+(int) z);
  printf ("z = %lf\t x = %c\n", z, x );
  printf ("\n");

  z = z - (int) z;      // isolar parte fracionaria
  printf ("z = %lf\n", z );
  z = (double) x;       // conformacao explicita
  printf ("z = %lf\t x = %c\n", z, x );
  z = 1.0 * x;          // conformacao implicita
  printf ("z = %lf\t x = %c\n", z, x );
  printf ("\n");

  printf("\nOperacoes\n");
  z = x / 2;            // metade inteira
  printf ("z = %lf\n", z );
  z = (double) (x/2);   // metade real
  printf ("z = %lf\n", z );
  z = (double) x / 2;   // numerador   real
  printf ("z = %lf\n", z );
  z = x / (double) 2;   // denominador real
  printf ("z = %lf\n", z );
  z = (double) x / (double) 2;     // reais
  printf ("z = %lf\n", z );
  printf ("\n");

  // mostrar valores com formatos
  printf("status  : %d \n", status  );
  printf("contador: %d \n", contador);
  printf("valor_1 : %f \n", valor_1 );
  printf("valor_2 : %lf\n", valor_2 );
  printf("simbolo : %c \n", simbolo );
  printf ("\n");

  // encerrar
  printf("%s\n","Apertar ENTER para terminar.");
  getchar( );
  return (0);
}
/*
  Testes e observacoes:
1. Teste simples
999999_AED1

Conversoes
z = 1.200000     y = 1
x = A    y = 65
x = A    y = 65

y = 97   x = a
z = 1.200000     x = 1

z = 0.200000
z = 49.000000    x = 1
z = 49.000000    x = 1

Operacoes
z = 24.000000
z = 24.000000
z = 24.500000
z = 24.500000
z = 24.500000

status  : 0
contador: 0
valor_1 : 0.000000
valor_2 : 0.000000
simbolo : 0

Apertar ENTER para terminar.

*/
