#include <stdio.h>

int main()
{
    int x = 100;
    printf("x: %d\n", x); 
    while(x>=0) 
    {
        printf("%d\n", x);
        x = x -2;
    }
}