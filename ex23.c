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
    int n;
    printf("Utente inserisci un numero :");
    scanf("%d", &n);

    int f = fattoriale (n);

    printf("il fattoriale di %d", f);
}