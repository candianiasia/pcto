#include <stdio.h>
void operazione(int x, int y)
{
    printf("inserisci due numeri");
    scanf("%d", &x);
    scanf("%d", &y);
   
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    int z;
    int somma;
    int sottrazione; 
    int quoziente;

    if(z==0)
    {
       z = x*y;
       printf("%d", z);

    }
    else if (somma==1)
    {
        somma = x+y;
        printf("%d", somma);
    }
    else if(sottrazione ==2)
    {
        sottrazione = x-y;
        printf("%d", sottrazione);
    }
    else if (quoziente==3)
    {
        quoziente = x/y;
        printf("%d", quoziente);
    }

}