#include <stdio.h>
#include <string.h>

#define max_uz 100  

int main() 
{
  char c[max_uz];  
  char temp[max_uz][max_uz];  
  int kelime_sayisi = 0;  

  
  printf("Bir cumle giriniz: ");
  fgets(c,max_uz, stdin);

  
  int i = 0;
  int j = 0;
  while (c[i] != '\0') {
    if (c[i] == ' ' || c[i] == '\n') {
      temp[kelime_sayisi][j] = '\0';
      kelime_sayisi++;
      j = 0;
    } else {
      temp[kelime_sayisi][j] = c[i];
      j++;
    }
    i++;
  }

  
  for (i = 0; i <kelime_sayisi - 1; i++) {
    for (j = i + 1; j <kelime_sayisi; j++) {
      if (strlen(temp[i]) > strlen(temp[j])) {
        char t[max_uz];
        strcpy(t, temp[i]);
        strcpy(temp[i], temp[j]);
        strcpy(temp[j], t);
      }
    }
  }
  for (i = 0; i <kelime_sayisi; i++) 
  {
    printf("%s ", temp[i]);
  }
  printf("\n");
 
  return 0;
}


