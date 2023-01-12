#include<stdio.h>
#include<stdlib.h>
int main()
{
	int dizi[4],i;
	for(i=0;i<4;i++)
	{
		printf("%d.elemani giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<4;i++)
	{
			if(dizi[i]%2==0)
			{
			    dizi[i]++;	
			}
			else
			{
				dizi[i]--;
			}
	}
	for(i=0;i<4;i++)
	{
		printf("%d",dizi[i]);
	}
	return 0;
}

