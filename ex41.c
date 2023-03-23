#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("inserisci due numeri");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x: %d\n", x);
    printf("y: %d\n", y);
   
    if(x>0 && y>0)
    {
       printf("sei nel primo quadrante ");
    }
    else if(x<0 && y>0)
    {
        printf("sei nel secondo quadrante ");
    }
    else if(x<0 && y<0)
    {
        printf("sei nel terzo quadrante ");
    }
    else if( x==0 && y==0)
    {
        printf("il punto si trova nell'origine ");
    }
    else 
    {
        printf("sei nel quarto quadrante ");
    }
}