#include<stdio.h>
int main ()
{
	int dizi[100],i,n;
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("dizi[%d]:",i);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<n;i++)
	{
		if(dizi[i]<dizi[i+1]&&dizi[i]<dizi[i-1])
		{
			printf("yerel minimum deger: %d",dizi[i]);
		}
	}
	return 0;
}

