#include <stdio.h>

char parametro (char a)
{
    if(a>=65 && a<=90)
    {
       a = a + 32; 
    }
    else if (a>=97 && a<=122)
    {
        a = a -32;
    }
     else if (a>=1 && a<=64 || a>=91 && a<=96 || a>= 124 && a<=127)
    {
        a = a;

    }
    return (a);
}
int main()
{
    char x;
    printf("scrivi un carattere ");
    scanf("%c", &x);
    char f = parametro (x);
    printf("la lettera è: %c ", f);
}