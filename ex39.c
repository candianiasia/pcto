#include <stdio.h>
void parametro (int n)
{
    if (n<0)
    {
        printf("è negativo\n");
    }
    else
    {
        printf("è positivo\n");
    }
}
int main()
{
   int x;
   while(1)
   {
        printf("inserisci un numero: ");
        scanf("%d", &x);
        if (x == 0)
            break;
        parametro(x);
   }
    
}
