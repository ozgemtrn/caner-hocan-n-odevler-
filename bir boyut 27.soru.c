#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[1000];
    char ters_cumle[1000];
    char kelime[50];
    int i, j, k, kelime_sayisi;

    printf("Cumleyi giriniz: ");
    gets(cumle);
	kelime_sayisi = 0;
    for (i = 0; i < strlen(cumle); i++)
    {
        if (cumle[i] == ' ')
            kelime_sayisi++;
    }
    kelime_sayisi++;
	i = strlen(cumle) - 1;
    k = 0;
    while (i >= 0)
    {
        j = 0;
        while (cumle[i] != ' ' && i >= 0)
        {
            kelime[j] = cumle[i];
            j++;
            i--;
        }
        kelime[j] = '\0';

        
        strcpy(&ters_cumle[k], kelime);
        strcat(&ters_cumle[k], " ");
        k += j + 1;

        i--;
    }
    printf("Yeni cumle: %s\n", ters_cumle);

    return 0;
}
