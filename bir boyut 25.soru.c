#include <stdio.h>

int main()
{
    int i, j;
    double sayi;
    char ondalik[100];

    printf("Ondalikli sayi giriniz: ");
    scanf("%lf", &sayi);

    sprintf(ondalik, "%.2lf", sayi);

    printf("Girilen sayi: %.2lf\n", sayi);
    printf("Ondalik kisim: %s\n", ondalik + 2);

    return 0;
}
