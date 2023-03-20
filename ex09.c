#include <stdio.h>

int main()
{
    int x;
    int y;
    int j;

    printf("inserisci tre numeri");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &j);
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("j: %d\n", j);

     if (x-y==y-j)
    {printf("è in progressione aritmetica");}
    else
    {printf("non è in progressione aritmetica");} 
}
