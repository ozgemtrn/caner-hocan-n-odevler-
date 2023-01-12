#include<stdio.h>
int main()
{
int sayi,i,j,k,l,m,sayac=0;
printf("Sayiyi giriniz:");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++)
{
	for(j=i+1;j<=sayi;j++)
	{
		for(k=j+1;k<=sayi;k++)
		{
			for(l=k+1;l<=sayi;l++)
			{
				for(m=l+1;m<=sayi;m++)
				{
				
					if(sayi==i+j+k+l+m)
					{
					
						sayac++;
						
					}
				}
			}
		}
	}
}
	printf("sayi %d defa bes farkli sayi ile yazilabilir",sayac);
	return 0;
}
