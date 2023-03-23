#include <stdio.h>
void fr_strlen(char*a)
{
  int j =0;
  while(a[j]!= '\0')
  {
    printf("%c\n", a[j]);
    j = j + 1;
  }

}
int main()
{
    char b[] = "eisha";
    fr_strlen(b);  
}