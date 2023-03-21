#include <stdio.h>

int main()
{
     int x = 0;
     int somma;
     printf("x: %d\n", x); 
     while(x<100) 
     {
        x = x +2;
        somma = x + somma;
     }
      printf("somma: %d\n", somma);
}