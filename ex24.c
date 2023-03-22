#include <stdio.h>
int main()
{
    int n;
    int y;
    int z;
    int f;
    int k;
    z = 0;
    printf("inserisci un numero positivo");
    scanf("%d", &n);
    k = n;
    while (n>0)
    {
        printf("scrivi un numero");
        scanf("%d", &y);
        
        z = z + y;
        n = n - 1;
    }
    f = z/k;
    printf("la somma di tutti i numeri che ho inserito è %d\n", z);
    printf("la media dei numeri è %d\n", f);

}