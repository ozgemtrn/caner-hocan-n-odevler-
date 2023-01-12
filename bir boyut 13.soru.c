#include <stdio.h>
#include <string.h>

int main() {
  char str[100];  
  int i,sayac = 0; 

  printf("Cumle giriniz: ");
  gets(str);  

  int len = strlen(str); 
  
  for (i = 0; i < len; i++) 
  {
    if (str[i] == ' ') 
    {
      if (str[i-1] == 'a') 
        sayac++;
    }
  }

  if (str[len-1] == 'a') 
    sayac++;

  printf("'a' ile biten kelime sayisi: %d\n", sayac);

  return 0;
}
