#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,j,kuvvet=0,sayac=0;
	printf("Ust siniri giriniz:");
	scanf("%d",&n);
	int dizi[n], binary[n],toplam[n];
	for(i=0; i<n; i++)
		dizi[i]=i+1;
	for(i=0; i<n; i++)
		binary[i]=0;
		
	for(i=0;i<n;i++)
	{
		while(dizi[i]!=0)
		{
			if(dizi[i]>pow(2,kuvvet))
				kuvvet++;
			else if(dizi[i]==pow(2,kuvvet))
			{
			binary[i]+=pow(10,kuvvet);
			dizi[i]=0;
			}
			else
			{
				binary[i]+=pow(10,(kuvvet-1));
				dizi[i]-=pow(2,(kuvvet-1));
				kuvvet=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	
	printf("binary: %d\n",binary[i]);
	}
	for(i=0;i<n;i++)
	{
		toplam[i]=0;
		while(binary[i]!=0)
		{
		toplam[i]+=binary[i]%10;
		binary[i]/=10;
		}
		printf("toplam= %d\n",toplam[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<toplam[i];j++)
		{
		    if(toplam[i]%j==0)
		    {
		    	sayac++;
			}			
		}
		if(sayac==1)
		{
				
			printf("asal olanlar: %d \n", i+1);
		}
		sayac=0;
	}
	
	return 0;
}


