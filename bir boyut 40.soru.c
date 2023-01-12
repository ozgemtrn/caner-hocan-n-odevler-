#include <stdio.h>
#include <math.h>

int main()
{
    long sayi, bolum, kalan;
    int i,j=0;
    char onaltilik[100];
	printf("bir sayi giriniz: ");
    scanf("%ld", &sayi);
    bolum = sayi;
    while (bolum!=0)
    {
        kalan = bolum % 16;
        if (kalan < 10)
            onaltilik[j++] = 48 + kalan;
        else
            onaltilik[j++] = 55 + kalan;
        bolum = bolum / 16;
    }
	printf("\nsayinin on altilik tabandaki hali=");
    for (i=j;i>= 0;i--)
       printf("%c", onaltilik[i]);
            
    return 0;
}
