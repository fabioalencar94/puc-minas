// 999999_AED1
// Repeticao com variacao (crescente/decrescente)
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
  for(x=0; x < 5; x=x+1)
  {
   // mostrar valor em linha separada
      printf("%d\n", x);
  }

  // repetir enquanto condicao verdadeira
  printf ("\n%s\n", "Repeticao decrescente");
  for(x = 5; x > 0; x=x-1)
  {
   // mostrar valor na mesma linha
      printf("%d ", x);
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
