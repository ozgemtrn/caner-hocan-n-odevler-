#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, ust, alt,kalan=0,a,temp;
	printf("ust siniri giriniz:");
	scanf("%d",&ust);
	printf("alt siniri giriniz:");
	scanf("%d",&alt);
	for(i=alt;i<ust;i++)
	{
		temp=i;
		a=0;
		while(temp)
		{
			
		kalan=temp%10;		
		temp=temp/10;
		a=a*10+kalan;
			
		}
		if(i==a)
		{
			printf(" %d\n",i);
		}	
	}
	printf("Polindrom  sayilardir");
    return 0;
		
	}
	

