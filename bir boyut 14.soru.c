#include <stdio.h>
#include <string.h>

int main() 
{
    char ay[12];
    printf("Ay ismini girin: ");
    scanf("%s",ay);

    if (strcmp(ay, "Ocak") == 0) 
        printf("Bu, yilin 1. ayidir.");
    
    else if (strcmp(ay, "Subat") == 0) 
        printf("Bu, yilin 2. ayidir.");
    
    else if (strcmp(ay, "Mart") == 0) 
        printf("Bu, yilin 3. ayidir.");
    
    else if (strcmp(ay, "Nisan") == 0) 
        printf("Bu, yilin 4. ayidir.");

	else if (strcmp(ay, "Mayis") == 0) 
        printf("Bu, yilin 5. ayidir.");

	else if (strcmp(ay, "Haziran") == 0) 
        printf("Bu, yilin 6. ayidir.");
        
	else if (strcmp(ay, "Temmuz") == 0) 
        printf("Bu, yilin 7. ayidir.");

	else if (strcmp(ay, "Agustos") == 0) 
        printf("Bu, yilin 8. ayidir.");

	else if (strcmp(ay, "Eylul") == 0) 
        printf("Bu, yilin 9. ayidir.");
	
	else if (strcmp(ay, "Ekim") == 0)
        printf("Bu, yilin 10. ayidir.");
        
    else if (strcmp(ay, "Kasim") == 0)
        printf("Bu, yilin 11. ayidir.");
        
    else if (strcmp(ay, "Aralik") == 0)
        printf("Bu, yilin 12. ayidir.");
    
    else
        printf("Geçersiz ay ismi girdiniz.Lutfen tekrar deneyiniz :)");

    return 0;
}

