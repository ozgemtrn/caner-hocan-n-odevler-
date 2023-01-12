#include <stdio.h>
#include <string.h>

int main() 
{
char cumle[1000];
char kelime[50];
int i, j, bul; 
printf("Cumleyi giriniz: ");
fgets(cumle, 1000, stdin); 
printf("Aranacak kelimeyi giriniz: ");
scanf("%s", kelime);
bul = 0;
for (i=0;i<strlen(cumle);i++) 
{
    if (cumle[i] == kelime[0]) 
    {
        for (j = 0; j < strlen(kelime); j++) 
        {
            if (cumle[i+j] != kelime[j]) 
            { 
                break; 
            }
        }
        if (j == strlen(kelime))
        { 
            bul = 1; 
            break; 
        }
    }
}

if (bul == 1)  
    printf("Kelime cumlede bulundu.\n");
    
else 
    printf("Kelime cumlede bulunamadi.\n");

return 0;

}
