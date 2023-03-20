#include <stdio.h>

int main()
{
   int x;
   printf("inserisci un numero");
   scanf("%d", &x);
   printf("x: %d\n", x);

   x = x +7;
   printf("x: %d\n", x);

   x = x-7;
   printf("x: %d\n", x);
   
   x = x*7;
   printf("x: %d\n", x);
   
   x = x/7;
   printf("x: %d\n", x);

   x = x%7;
   printf("x: %d\n", x);
} 