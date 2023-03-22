#include <stdio.h>

int parametro (int n)
{
    if ( n<0)
    {
        n = n * (-1);
    }
    return (n);

}
int main ()
{
    int x;
    printf("scrivi un numero");
    scanf("%d", &x);
    printf("%d\n",parametro(x));
}