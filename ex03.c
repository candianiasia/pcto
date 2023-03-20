#include <stdio.h>

int main()
{
   int x,y;
   printf("inserisci due numeri");
   scanf("%d", &x);
   scanf("%d", &y);
   printf("x: %d\n", x);
   printf("y: %d\n", y);

   int somma = x+y;
   int sottrazione = x-y; 
   int moltiplicazione = x*y;
   int quoziente = x/y;
   int resto = x%y;

   printf("somma: %d\n", somma);
   printf("sottrazione: %d\n", sottrazione);
   printf("moltiplicazione: %d\n", moltiplicazione);
   printf("quoziente: %d\n", quoziente);
   printf("resto: %d\n", resto);
} 