#include <stdio.h>
int fr_strlen(char*a)
{
  int j =0;
  while(a[j]!= 0)
  {
    j = j + 1;
  }
  return (j);
}
int main()
{
    char a[] = "eisha :";
    printf("%s", a);
    printf(" la stringa è lunga %d ", fr_strlen(a));
    
}