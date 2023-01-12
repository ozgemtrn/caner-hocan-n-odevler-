#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
	char cumle[100];
	int i,sayac1=0,sayac2=0,sayac3=0;
	printf("Cumleyi giriniz:");
	gets(cumle);
	for(i=0;i<strlen(cumle);i++)
	{
		if(cumle[i]==' ')
		{
			sayac1++;
		}
}
		for(i=0;i<strlen(cumle);i++)
		{
		
		if(cumle[i]==',')
		{
			sayac2++;
		}
	}
	    for(i=0;i<strlen(cumle);i++)
	    {
		 if(cumle[i]=='.')
		{
			sayac3++;
		}
		}
		
		if(sayac1>sayac2 && sayac1>sayac3)
		{
			printf("En cok tekrar eden karakter: bosluktur");
		}
		else if(sayac2>sayac1 && sayac2>sayac3)
		{
			printf("En cok tekrar eden karakter: ,");
		}
		else
		{
			printf("En cok tekrar eden karakter: .");
		}
		return 0;
		
}
		
	
		

	
	
	

