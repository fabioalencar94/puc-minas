// 999999_AED1
// Operacoes logicas e comparacoes
#include <stdio.h>
#include <stdbool.h>
#include <iso646.h>  

/*
  Funcao principal.
 */
int main(void) 
{
  // definir dado
  bool p = true ;
  bool q = false;
  bool r = false;

  char a =   'A';
  char b =   'a';
  int  x =    5 ;
  int  y =    7 ;

  // mostrar mensagem com formato 
  printf("%s\n","999999_AED1"); 
  
  printf("\nDados:\n");
  printf("     p = %d\n", p);
  printf("     q = %d\n", q);
  printf("\n");
  
  printf("\nNegacao\n");
  r = ! p;    // NOT - logical negation
  printf(" !   p = %d\n", r);
  r = ! q;    // NOT - logical complement
  printf(" !   q = %d\n", r);
  r = not p;  // NOT - logical negation
  printf("not  p = %d\n", r);
  printf("\n");

  printf("\nConjuncao\n");
  printf("0 && 0 = %d\n", (0 && 0) );
  printf("0 && 1 = %d\n", (0 && 1) );
  printf("1 && 0 = %d\n", (1 && 0) );
  printf("1 && 1 = %d\n", (1 && 1) );
  printf("\n");

  printf("\nDisjuncao\n");
  printf("0 || 0 = %d\n", (0 || 0) );
  printf("0 || 1 = %d\n", (0 || 1) );
  printf("1 || 0 = %d\n", (1 || 0) );
  printf("1 || 1 = %d\n", (1 || 1) );
  printf("\n");

  printf("\nDisjuncao exclusiva\n");
  printf("0 ^  0 = %d\n", (0 ^  0) );
  printf("0 ^  1 = %d\n", (0 ^  1) );
  printf("1 ^  0 = %d\n", (1 ^  0) );
  printf("1 ^  1 = %d\n", (1 ^  1) );
  printf("\n");

  printf("\nOperacoes logicas\n");
  r = p &&  q; // AND - logical conjunction
  printf("p &&  q = %d\n", r);
  r = p and q; // AND - logical conjunction
  printf("p and q = %d\n", r);
  r = p ||  q; // OR  - logical disjunction
  printf("p ||  q = %d\n", r);
  r = p or  q; // AND - logical conjunction
  printf("p or  q = %d\n", r);
  printf("\n");

  r = p ^   q; // XOR - logical exclusive disjunction
  printf("p  ^  q = %d\n", r);
  r = p xor q; // XOR - logical exclusive disjunction
  printf("p xor q = %d\n", r);
  r = p ^   p; // XOR - logical exclusive disjunction
  printf("p  ^  p = %d\n", r);
  r = p xor p; // XOR - logical exclusive disjunction
  printf("p xor p = %d\n", r);
  printf("\n");

  printf("\nComparacoes\n");
  printf("   (%c==%c) = %d\n", a, a, (a==a));
  printf("   (%c!=%c) = %d\n", a, a, (a!=a));
  printf("\n");
  
  r =  !  (a==a);        // NOT - logical negation
  printf(" ! (%c==%c) = %d\n", a, a, r);
  r =  !  (a!=a);        // NOT - logical complement
  printf(" ! (%c!=%c) = %d\n", a, a, r);
  r = not (a==a);        // NOT - logical negation
  printf("not(%c==%c) = %d\n", a, a, r);
  printf("\n");

  r = (x<y)  &&  (x!=0); // AND - logical conjunction
  printf("(%d<%d)  && (%d!=0)= %d\n", x,y,x,r);
  r = (x<y)  and (x!=0); // AND - logical conjunction
  printf("(%d<%d) and (%d!=0)= %d\n", x,y,x,r);
  r = (x>=y) ||  (x!=0); // OR  - logical disjunction
  printf("(%d>=%d) || (%d!=0)= %d\n", x,y,x,r);
  r = (x>=y) or  (x!=0); // OR  - logical disjunction
  printf("(%d<%d)  or (%d!=0)= %d\n", x,y,x,r);
  r = (x<=y) &&  (x> 0); // AND - logical conjunction
  printf("(%d<%d)  && (%d> 0)= %d\n", x,y,x,r);
  r = (x<=y) and (x> 0); // AND - logical conjunction
  printf("(%d<%d) and (%d> 0)= %d\n", x,y,x,r);
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

Dados:
     p = 1
     q = 0


Negacao
 !   p = 0
 !   q = 1
not  p = 0


Conjuncao
0 && 0 = 0
0 && 1 = 0
1 && 0 = 0
1 && 1 = 1


Disjuncao
0 || 0 = 0
0 || 1 = 1
1 || 0 = 1
1 || 1 = 1


Disjuncao exclusiva
0 ^  0 = 0
0 ^  1 = 1
1 ^  0 = 1
1 ^  1 = 0


Operacoes logicas
p &&  q = 0
p and q = 0
p ||  q = 1
p or  q = 1

p  ^  q = 1
p xor q = 1
p  ^  p = 0
p xor p = 0

Comparacoes
   (A==A) = 1
   (A!=A) = 0

 ! (A==A) = 0
 ! (A!=A) = 1
not(A==A) = 0

(5<7)  && (5!=0)= 1
(5<7) and (5!=0)= 1
(5>=7) || (5!=0)= 1
(5<7)  or (5!=0)= 1
(5<7)  && (5> 0)= 1
(5<7) and (5> 0)= 1

Apertar ENTER para terminar.

*/

