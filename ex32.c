#include <stdio.h>
int fattoriale (int n)
{
  int y = 1;
  while (n>1)  
{ 
    y = n * y;
    n = n - 1;
}
   return(y);
}
int main ()
{
    int j;
    printf("scrivi un numero");
    scanf("%d", &j);
    int a [j];
    int i=0;
    while (i<j)
   {
    a[i] = fattoriale (i);
    printf(" %d = %d\n", i, a[i]);
    i ++;
   }
}