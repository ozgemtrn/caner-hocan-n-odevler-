#include <stdio.h>
#include <string.h>

int main(){
	char kelime[100];
	printf("Baconian ile sifrelemek istediginiz kelimeyi buyuk harflerle giriniz: ");
	scanf("%s",kelime);
	char harfTablo[26][2]={
		{'A','A'},
		{'B','B'},
		{'C','A'},
		{'D','B'},
		{'E','A'},
		{'F','B'},
		{'G','A'},
		{'H','B'},
		{'I','A'},
		{'J','B'},
		{'K','A'},
		{'L','B'},
		{'M','A'},
		{'N','B'},
		{'O','A'},
		{'P','B'},
		{'Q','A'},
		{'R','B'},
		{'S','A'},
		{'T','B'},
		{'U','A'},
		{'V','B'},
		{'W','A'},
		{'X','B'},
		{'Y','A'},
		{'Z','B'}
};
    int i;
    for(i=0;i<strlen(kelime);i++)
	{
		char c=kelime[i];
		int j;
		for(j=0;j<26;j++)
		{
			if(harfTablo[j][0] == c)
			{
				printf("%c%c",harfTablo[j][1],harfTablo[j][1]);	
				break;
			}
		} 
			   
    }
return 0;
		
	
	}
	
	

