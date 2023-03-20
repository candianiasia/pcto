#include <stdio.h>

int main()
{
    int x;
   printf("inserisci la tua eta");
   scanf("%d", &x);
   printf("x: %d\n", x);
   if(x>=18)
   { printf("sei maggiorenne");}
   else
   { printf("non sei maggiorenne");}
}