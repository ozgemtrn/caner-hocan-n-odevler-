#include <stdio.h>
#include <stdlib.h>

int main()
{
  int gun,ay;

  printf("Dogum gununuzu girin (1-31): ");
  scanf("%d", &gun);

  printf("Dogum ayinizi girin (1-12): ");
  scanf("%d", &ay);
  if(gun>31 || ay>12)
  	printf("Gecersiz ifade.Lutfen tekrar deneyiniz :)\n");

  if else ((ay == 3 && gun >= 21) || (ay == 4 && gun <= 19)) {
    printf("Koc burcusunuz.\n");
  } else if ((ay == 4 && gun >= 20) || (ay == 5 && gun <= 20)) {
    printf("Boga burcusunuz.\n");
  } else if ((ay == 5 && gun >= 21) || (ay == 6 && gun <= 20)) {
    printf("Ikizler burcusunuz.\n");
  } else if ((ay == 6 && gun >= 21) || (ay == 7 && gun <= 22)) {
    printf("Yengec burcusunuz.\n");
  } else if ((ay == 7 && gun >= 23) || (ay == 8 && gun <= 22)) {
    printf("Aslan burcusunuz.\n");
  } else if ((ay == 8 && gun >= 23) || (ay == 9 && gun <= 22)) {
    printf("Basak burcusunuz.\n");
  } else if ((ay == 9 && gun >= 23) || (ay == 10 && gun <= 22)) {
    printf("Terazi burcusunuz.\n");
  } else if ((ay == 10 && gun >= 23) || (ay == 11 && gun <= 21)) {
    printf("Akrep burcusunuz.\n");
  } else if ((ay == 11 && gun >= 22) || (ay == 12 && gun <= 21)) {
    printf("Yay burcusunuz.\n");
  } else if ((ay == 11 && gun >= 22) || (ay == 12 && gun <= 19)) {
    printf("Oglak burcusunuz.\n");
  } else if ((ay == 12 && gun >= 20) || (ay == 1 && gun <= 18)) {
    printf("Kova burcusunuz.\n");
  } else if ((ay == 1 && gun >= 19) || (ay == 2 && gun <= 20)) {
    printf("Balik burcusunuz. \n");
  } 
  else 
  {
	printf("Gecersiz ifade.Lutfen tekrar deneyiniz :)\n");
  }
return 0;
}
    
