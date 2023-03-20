#include <stdio.h>

int main()
{
   int x;
   printf("inserisci un numero");
   scanf("%d", &x);
   printf("x: %d\n", x);  
   if (x>50)
   {
        x = x/2;
        printf("x: %d\n", x);
   }
   else
   {
       x = x*3;
       printf("x: %d\n", x);
   }
}