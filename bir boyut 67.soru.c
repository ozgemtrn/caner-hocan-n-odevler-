#include <stdio.h>
#include <string.h>

int main()
{
	char sifre[100];
	printf("Baconian sifresini giriniz: ");
	scanf("%s",sifre);
	char harfTablo[26][2]={
		{'A','A'},
		{'B','B'},
		{'A','C'},
		{'B','D'},
		{'A','E'},
		{'B','F'},
		{'A','G'},
		{'B','H'},
		{'A','I'},
		{'B','J'},
		{'A','K'},
		{'B','L'},
		{'A','M'},
		{'B','N'},
		{'A','O'},
		{'B','P'},
		{'A','Q'},
		{'B','R'},
		{'A','S'},
		{'B','T'},
		{'A','U'},
		{'B','V'},
		{'A','W'},
		{'B','X'},
		{'A','Y'},
		{'B','Z'}
};
    int i;
    for(i=0;i<strlen(sifre);i++)
	{
		char c=sifre[i];
		int j;
		for(j=0;j<26;j++)
		{
			if(harfTablo[j][0] == c)
			{
				printf("%c",harfTablo[j][1]);	
				break;
			}
		} 
			   
    }
return 0;
		
	
	}
