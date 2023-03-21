#include <stdio.h>
int main()
{
 int x;
 x =1;
 while (x<=100)
 {printf("%d\n", x);
 x = x + 1;
 if (x%3 == 0)
 {printf("fizz");}
 if( x %5 == 0)
 {printf("buzz");}
 if ( x%5==0 && x%3==0)
 {printf("fizzbuzz");} }
}