#include <stdio.h>
#include <math.h>

int main()
{
    int eleman_sayisi, i;
    double xs_dizi[100], w_dizi[100], x_toplam = 0, w_toplam = 0, agirlikli_art_ortalama, agirlikli_geo_ortalama = 1, agirlikli_hrm_ortalama = 0;

    printf("Eleman sayisini giriniz: ");
    scanf("%d", &eleman_sayisi);

    printf("x dizisinin elemanlarini giriniz: ");
    
	
	for (i = 0; i < eleman_sayisi; i++)
    {
        scanf("%lf", &x_dizi[i]);
    }

    printf("w dizisinin elemanlarini giriniz (girilen elemanlarin sirasiyla agirliklari): ");
    
	
	for (i = 0; i < eleman_sayisi; i++)
    {
        scanf("%lf", &w_dizi[i]);
        w_toplam += w_dizi[i];
        x_toplam += x_dizi[i] * w_dizi[i];
        agirlikli_geo_ortalama *= pow(x_dizi[i], w_dizi[i]);
        agirlikli_hrm_ortalama += w_dizi[i] / x_dizi[i];
    }
   
   
    agirlikli_art_ortalama = x_toplam / w_toplam;
    agirlikli_geo_ortalama = pow(agirlikli_geo_ortalama, 1.0 / w_toplam);
    agirlikli_hrm_ortalama = w_toplam / agirlikli_hrm_ortalama;

    
	
	printf("Agirlikli Aritmetik Ortalama: %lf\n", agirlikli_art_ortalama);
    printf("Agirlikli Geometrik Ortalama: %lf\n", agirlikli_geo_ortalama);
    printf("Agirlikli Harmonik Ortalama: %lf\n", agirlikli_hrm_ortalama);

    return 0;
}
