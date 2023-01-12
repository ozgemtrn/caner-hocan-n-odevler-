#include <stdio.h>
#include <string.h>

int main() {
    char sifre[100], anahtar[100], kelime[100];
    int i, j;
    printf("Sifreyi giriniz: ");
    scanf("%s", sifre);
    printf("Anahtar kelimeyi giriniz: ");
    scanf("%s", anahtar);
    j = strlen(sifre);
    for (i = strlen(anahtar); i < j; i++) 
	{
        anahtar[i] = anahtar[i % strlen(anahtar)];
    }
    for (i = 0; i < j; i++) 
	{
        kelime[i] = (sifre[i] - anahtar[i] + 26) % 26 + 'A';
    }
    printf(" Beaufort ile sifrelenmis kelime: %s\n",kelime);
    return 0;
}
