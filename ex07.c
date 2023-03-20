#include <stdio.h>

int main()
{
    int x,y;
    printf("inserisci due numeri");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    if (x%y==0)
    {printf("è multiplo");}
    else
    {printf("non è multiplo");} 
}
