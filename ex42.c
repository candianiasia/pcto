#include <stdio.h>
int main()
{
    int x;
    int y;
    int j;
    int perimetro;
    printf("inserisci tre numeri");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &j);
  
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("j: %d\n", j);
   
    if(x+y>j && x+j>y && y+j>x)
    {
        printf("possono essere le lunghezze dei lati di un triangolo\n");
        if (x==y && y==j)
        {
            printf("è un triangolo equilatero\n");
            perimetro = x + y + j;
            printf("il perimetro è %d\n", perimetro);
        }
        else if ( x==y  || x==j  || y==j)
        {
             printf("è un triangolo isoscele\n");
             perimetro = x + y + j;
            printf("il perimetro è %d\n", perimetro);

        }
        else 
        {
             printf("è un triangolo scaleno\n");
             perimetro = x + y + j;
            printf("il perimetro è %d\n", perimetro);

        }

    }
    else
    {
        printf("non possono essere le lunghezze dei lati di un triangolo ");
    }
}