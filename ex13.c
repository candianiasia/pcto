#include <stdio.h>

int main()
{
   int x;
   printf("inserisci il tuo anno di nascita");
   scanf("%d", &x);
   printf("x: %d\n", x);  
   if (x==1969)
   { 
    printf("sei nato lo stesso anno dello sbarco sulla luna");
   }
   else if ( x> 1969)
    {  
        x = x - 1969;
       printf(" sei nato %d\n anni dopo lo sbarco sulla luna", x);
    }
    else 
    {  
        x = 1969 - x;
        printf("sei nato %d\n anni prima lo sbarco sulla luna", x);
    }
}