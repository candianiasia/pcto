#include <stdio.h>
int prodotto(int x, int y)
{
    int z = x * y;
    return (z);
}
int somma(int x, int y)
{
    int z = x + y;
    return (z);
}
int main ()
{
    int n1 = 3;
    int n2 = 7;

    int p = prodotto (n1,n2);
    int l = somma (n1, n2);

    printf("il prodotto dei due numeri è: %d\n", p);
    printf("la somma dei due numeri è: %d\n", l);
}