#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, j;
    long long int sayi;
    char sayi_str[100];

    printf("Tam sayi giriniz: ");
    scanf("%lld", &sayi);

    sprintf(sayi_str, "%lld", sayi);

    int basamak_sayisi = strlen(sayi_str);

    printf("Girilen sayi: %lld\n", sayi);
    printf("Basamak sayisi: %d\n", basamak_sayisi);
    printf("Sayi / basamak sayisi: %.2lf\n", (double)sayi / basamak_sayisi);

    return 0;
}
