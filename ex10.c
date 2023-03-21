#include <stdio.h>

int main()
{
   int x;
   printf("inserisci un anno");
   scanf("%d", &x);
   printf("x: %d\n", x);  
   if (x%4 == 0  && x%100 != 0 || x%400 == 0 )
   {printf("è un anno bisestile");}
   else 
   {printf("non è un anno bisestile");}
}
