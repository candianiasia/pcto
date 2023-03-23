#include <stdio.h>

void parametro(char *a)
{
    int i = 0;
    while(a[i] != '\0')
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i] -= 32;
        }
        i++;
    }
    printf("%s", a);
}

int main()
{ 
    char g[] = "ciaoOOOaaa";
    parametro(g); 

}