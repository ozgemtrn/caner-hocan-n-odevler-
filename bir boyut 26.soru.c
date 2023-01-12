#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, j, n;
    long long int enb, enk;
    char enb_str[100], enk_str[100];

    printf("Tam sayi giriniz: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++)
        enb_str[i] = '9';
        
    enb_str[n] = '\0';
    sscanf(enb_str, "%lld", &enb);

   
    for (i = 0; i < n; i++)
        enk_str[i] = '0';
        
    enk_str[0] = '1';
    enk_str[n] = '\0';
    sscanf(enk_str, "%lld", &enk);

    printf("%d basamakli en buyuk sayi: %lld\n", n, enb);
    printf("%d basamakli en kucuk sayi: %lld\n", n, enk);
    printf("Fark: %lld\n", enb- enk);

    return 0;
    
}
