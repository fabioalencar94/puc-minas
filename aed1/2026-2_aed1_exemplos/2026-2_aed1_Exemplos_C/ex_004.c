// 999999_AED1
// Alternativas simples, duplas e multipla
#include <stdio.h>    // para printf(), scanf()
#include <stdbool.h>

/*
  Funcao principal.
 */
int main(void) 
{
  // mostrar mensagem  
  printf("%s\n","999999_AED1"); 

  int valor = 0;

  // entrar dado
  printf("\nEntrar com valor: ");
  scanf("%d", &valor); getchar( ); // ler e limpar

  // testar se valor negativo
  if(valor < 0) 
  {
    printf("%d -> negativo\n", valor); 
  }
  
  // testar se valor menor que 100
  if(valor < 100) 
  {
    printf("%d menor que 100\n", valor); 
  }
  else 
  {
   // testar se igual a 100
    if(valor == 100) 
    {
      printf("%d igual a 100\n", valor);
    }
    else
    {
      printf("%d diferente de 100\n", valor );
    }
  }
  printf ( "\n" );

  // entrar com opcao
  printf("\n%s", "Opcao [0,1,2]: ");
  scanf("%d", &opcao);  getchar( );

  // escolher acao dependente da opcao
  switch(opcao)
  {
    case 0:
      printf("%s\n", "Opcao 0 escolhida");
      break;

    case 1:
      printf("%s\n", "Opcao 1 escolhida");
      break;

    case 2:
      printf("%s\n", "Opcao 2 escolhida");
      break;

    default: // caso for outra opcao
      printf("%s\n", "Outra opcao escolhida");
      break;
  }
  printf ( "\n" );

  // encerrar
  printf("%s\n","Apertar ENTER para terminar.");
  getchar( );
  return (0);
}
/*
  Testes e observacoes:
1. Teste com -5
999999_AED1

Entrar com valor: -5
-5 -> negativo
-5 menor que 100
Apertar ENTER para terminar.

2. Teste com 100
999999_AED1

Entrar com valor: 100
100 igual a cem
Apertar ENTER para terminar.

3. Teste com 105
999999_AED1

Entrar com valor: 105
105 diferente de 100

1. Teste com 1
999999_AED1

Opcao: 1
Opcao 1 escolhida
Apertar ENTER para terminar.

2. Teste com -1
999999_AED1

Opcao: -1
Outra opcao escolhida

Apertar ENTER para terminar.

*/
