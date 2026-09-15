// 999999_AED1
// Funcoes matematicas e para comparacoes
#include <stdio.h>
#include <math.h>  // para funcoes matematicas

// functions
/*
  Funcao para elevar ao quadrado.
  @return quadrado do valor
  @para x - valor com o qual calcular
 */
double sqr(double x)
{  return(x*x);    }

/*
  Funcao para calcular o logaritmo base 2.
  @return logaritmo base 2 do valor
  @para x - valor com o qual calcular
 */
double lg (double x)
{  return(log10(x)/log10(2.0)); }

/*
   Funcao para determinar o maior valor.
   @return maior valor
   @param x - primeiro valor
   @param y - segundo  valor
 */
int max(int x, int y)
{
    int z = 0;
    if ( x > y )
       z = x; // {} is optional, but recommended
    else
       z = y; // {} is optional, but recommended
    return ( z );
}

/*
   Funcao para determinar o menor valor.
   @return menor valor
   @param x - primeiro valor
   @param y - segundo  valor
 */
int min(int x, int y)
{
    int z = x;
    if ( y < x )
       z = y; // {} is optional, but recommended
    return ( z );
}

/*
  Funcao principal.
 */
int main(void) 
{
  // definir dados
  int    x =  0 ;
  int    y =  0 ;
  int    z =  0 ;
  double d = 1.5;
  
  // iniciar
  printf ("%s\n","999999_AED1"); 

  // aplicar funcoes
  printf ("\nAplicar funcoes\n");
  printf ("floor(%lf) = %lf\n", 
           d, floor(d));     // piso
  printf ("\n");
  printf ("ceil(%lf)  = %lf\n",
           d, ceil(d) );     // teto
  printf ("\n");
  x = trunc(d);              // truncar
  printf ("trunc(%lf) = %d\n",
           d, x);
  printf ("\n");
  x = round(d);              // arredondar
  printf ("round(%lf) = %d\n",
           d, x);
  printf ("\n");

  // funcoes trigonometricas em radianos
  d = sin(30.0*M_PI/180.0);  // seno
  printf ("sin(30) = %5.2lf\n", d );
  d = cos(60.0*M_PI/180.0);  // cosseno
  printf ("cos(60) = %5.2lf\n", d );
  d = atan(1.00)*180.0/M_PI; // arco tangente
  printf ("atan(1) = %5.2lf\n", d );
  printf ("\n");

  d = pow(2.0,3.0);          // potencia
  printf ("pow(2,3) = %5.0lf\n", d );
  d = lg(d);                 // logaritmo base 2
  printf ("lg(8,2)  = %5.0lf\n", d );
  printf ("\n");

  d = sqr(2.0);              // quadrado
  printf ("sqr(2)   = %5.0lf\n", d );
  d = sqrt(d);               // raiz quadrada
  printf ("sqrt(4)  = %5.0lf\n", d );

  // aplicar funcoes para comparacoes
  x = 3; y = 5; z = 7;
  printf ("\nComparacoes\n");
  printf ("maior(%d,%d) = %d\n",
                  x, y, max(x,y));
  printf ("\n");
  printf ("maior(%d,%d,%d) = %d\n",
                  x, y, z, max(x,max(y,z)));
  printf ("\n");
  printf ("menor(%d,%d) = %d\n",
                  x, y, min(x,y));
  printf ("\n");
  printf ("menor(%d,%d,%d) = %d\n",
                  x, y, z, min(min(x,y),z));
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

Aplicar funcoes
floor(1.500000) = 1.000000

ceil(1.500000)  = 2.000000

trunc(1.500000) = 1

round(1.500000) = 2

sin(30) =  0.50
cos(60) =  0.50
atan(1) = 45.00

pow(2,3) =     8
lg(8,2)  =     3

sqr(2)   =     4
sqrt(4)  =     2

Comparacoes
maior(3,5) = 5

maior(3,5,7) = 7

menor(3,5) = 3

menor(3,5,7) = 3

Apertar ENTER para terminar.

*/
