#include <stdio.h>

int main()
{
 int x;
 int y;
 int z;
 printf("inserisci un numero");
 scanf("%d", &x);
 y=0;
 z=1;
 while(y<x)
 {
    y = y+1;
    z= z*y;
 }
    printf("%d!=%d\n", x, z);
}