// 999999_AED1      <- comentario com identificacao
// Mostrar mensagem <- comentario com objetivo
#include <stdio.h>  // biblioteca para entradas (getchar()) e
                    //            para saidas   (printf())

/*
  Funcao principal (sem parametros).
 */
int main(void)
{
  // mostrar mensagem com formato
  printf("%s\n","999999_AED1");

  // pausar
  printf("%s\n","Apertar ENTER para terminar.");
  getchar( );

  // encerrar
  return 0;
}
/*
  Testes e observacoes:
1. Teste simples
999999_AED1
Apertar ENTER para terminar.

*/
