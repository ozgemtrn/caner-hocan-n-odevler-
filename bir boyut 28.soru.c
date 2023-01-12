#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[1000];
    char enuz_kelime[50];
    char kelime[50];
    int i, j, enuz_kelime_uz;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    enuz_kelime_uz = 0;
    for (i = 0; i < strlen(cumle); i++)
    {
        j = 0;
        while (cumle[i] != ' ' && i < strlen(cumle))
        {
            kelime[j] = cumle[i];
            j++;
            i++;
        }
        kelime[j] = '\0';

        
        if (j > enuz_kelime_uz)
        {
            enuz_kelime_uz= j;
            strcpy(enuz_kelime, kelime);
        }
    }

    printf("En uzun kelime: %s\n", enuz_kelime);

    return 0;
}

