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

    for (i = 0; i < strlen(sayi_str); i++)
    {
        int hane = sayi_str[i] - '0';
        printf("%d / %d = %.2lf\n", hane, strlen(sayi_str), (double)hane / strlen(sayi_str));
    }

    return 0;
}