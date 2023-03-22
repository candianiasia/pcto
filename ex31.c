#include <stdio.h>
int main ()
{
   
   int a [6];
   int i = 0;
   while (i<6)
   {
    a[i] = 2 * i;
    printf("%d = %d\n", i, a[i]);
    i ++;
   }

}