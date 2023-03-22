#include <stdio.h>
int main()
{
    int y = 1;
    float z;
    int numero = 0;
    float sconto1;
    float sottr1;
    float sconto2;
    float sottr2;
 
    while (y>0)
    {
        printf("digita il numero di pezzi");
        scanf("%d", &y);
        numero = numero + y;
        z = numero * 5;
        if(numero>30 && numero<=50)
        {    
            sconto1 = z/100 * 10;
            printf("sconto1: %f\n", sconto1);
            sottr1 = z - sconto1;
            printf("il prezzo è %f\n", sottr1);
        }
        else if (numero > 50)
        {
            sconto2 = z/100 * 15 ;
            sottr2 = z - sconto2; 
            printf("il prezzo è %f\n", sottr2);
        }
        else
        {
            printf("il prezzo è %f\n", z);
        }
    }   
}