#include <stdio.h>

int main()
{
    int x,y,j;
    printf("inserisci tre numeri");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &j);
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("j: %d\n", j);
    if(x+y>j && x+j>y && y+j>x)
    {
        printf("possono essere le lunghezze dei lati di un triangolo");
    }
    else
    {
        printf("non possono essere le lunghezze dei lati di un triangolo");
    }
}