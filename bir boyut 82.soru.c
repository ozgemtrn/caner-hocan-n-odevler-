#include<stdio.h>
#include<math.h>
int main()
{
	int dizi[100];
	int i,n,ort,toplam=0;
	float s=0;
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		printf("dizi[%d]:",i);
		scanf("%d",&dizi[i]);
		
	}
	printf("dizinin ortalamasini giriniz:");
	scanf("%d",&ort);
	
	for(i=0;i<n-1;i++)
	{
		toplam=toplam+dizi[i];
		s=ort*n-toplam;
	}	
	
	
	printf("silinen eleman: %f dir",s);
	return 0;
}
