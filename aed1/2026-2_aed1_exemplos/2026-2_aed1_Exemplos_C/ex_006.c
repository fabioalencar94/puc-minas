// 999999_AED1
// Repeticao com teste no inicio (crescente/decrescente)
#include <stdio.h>

/*
  Funcao principal.
 */
int main(void) 
{
  // definir dado
  int x = 0;

  // mostrar mensagem com formato
  printf ("%s\n","999999_AED1");

  // repetir enquanto condicao verdadeira
  printf ("\n%s\n", "Repeticao crescente");
  while(x < 5)
  {
   // mostrar valor atual em linha separada
      printf("%d\n", x);
   // passar ao seguinte (em ordem crescente)
      x = x+1;
  }

  // repetir enquanto condicao verdadeira
  printf ("\n%s\n", "Repeticao decrescente");
  while(x > 0)
  {
   // mostrar valor atual na mesma linha
      printf("%d ", x);
   // passar ao seguinte (em ordem decrescente)
      x = x-1;
  }
  printf("\n");

  // encerrar
  printf("%s\n","Apertar ENTER para terminar.");
  getchar( );
  return (0);
}
/*
  Testes e observacoes:
999999_AED1

Repeticao crescente
0
1
2
3
4

Repeticao decrescente
5 4 3 2 1
Apertar ENTER para terminar.

*/
