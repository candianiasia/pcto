#include <stdio.h>
int main()
{
    int n = 1;
    int y;
    float z = 0;
    float f;
    float k = 0;
    
    while (n>0)
    { 
        printf("scrivi un numero");
        scanf("%d", &y);
        if(y >= 0)
       { k = k +1;
        z = z + y;
        f = z/k;
        printf("la media dei numeri è %f\n", f);}
        else 
        {
            n = n - 1;
            printf("errore\n");
        }
    }

}