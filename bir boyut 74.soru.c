#include<stdio.h>
#include<string.h>

int main()
{
	char cumle[100];
	int i,a,j,toplam[100] ,rakam[6]={9,5,1,7,5,3};
	printf("Cumleyi giriniz:");
	gets(cumle);
	a=strlen(cumle);
	for(i=0;i<a;i++)
	{
		for(j=0;j<6;j++)
		{
		toplam[i]=cumle[i]+rakam[j];
		}
    }
	printf("sifre= %d",toplam[i]);	
	return 0;
}
