#include <stdio.h>
#include <string.h>

int main() {
  char kelime[100];
  int i;
printf("Kelimeyi giriniz: ");
  gets(kelime); 
  for (i=0;i<strlen(kelime);i++) 
    printf("%c ",kelime[i]);
  
  printf("\n"); 

  return 0;
}
