//isalpha () fonksiyonu kelimenin alfabede bulunan bir harf olup olmadýðýný kontrol eder//
//isupper () fonksiyonu kelimenin büyük harf olup olmadýðýný kontrol eder//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kelime[100], anahtar[100];
    int i, j;
    printf("Kelimeyi giriniz: ");
    scanf("%s", kelime);
    printf("Anahtari giriniz: ");
    scanf("%s", anahtar);
    int anahtarUz = strlen(anahtar);
    int kelimeUz = strlen(kelime);
    for (i = 0, j = 0; i < kelimeUz; i++, j++)
	{
        if (j == anahtarUz) 
		{
            j = 0;
        }
        if (isalpha(kelime[i])) 
		{
            if (isupper(kelime[i])) 
			{
                kelime[i] = ((kelime[i] - anahtar[j] + 26) % 26) + 'A';
            } 
			else 
			{
                kelime[i] = ((kelime[i] - anahtar[j] + 26) % 26) + 'a';
            }
        } 
		else 
		{
            j--;
        }
    }
    printf("Vigenere ile sifrelenmis kelime: %s\n", kelime);
    return 0;
}
