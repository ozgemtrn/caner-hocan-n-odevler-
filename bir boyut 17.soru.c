#include <stdio.h>

int main(void) 
{
  float zaman[3];
  printf("Saat bilgisini girin (ss:dd:ss): ");
  scanf("%f:%f:%f", &zaman[0], &zaman[1], &zaman[2]);
  s float dakika = zaman[0] * 60 + zaman[1] + zaman[2]/60;
  printf("Toplam dakika: %.2f\n", dakika);
  
  return 0;
}
    
