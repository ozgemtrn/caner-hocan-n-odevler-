#include <stdio.h>
#include <string.h>

int main() 
{
  char cumle[1000]; 
  int i;

  printf("Cumleyi giriniz: ");
  gets(cumle); 
 for (i=0;i<strlen(cumle);i++) 
    printf("%c%c", cumle[i], cumle[i]); 
  return 0;
}
