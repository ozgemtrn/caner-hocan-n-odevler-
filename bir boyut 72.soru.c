#include<stdio.h>
#include<string.h>
int main()
{
	char kelime[100];
	int i, uzunluk;
	printf("Porta sifreleme ile sifrelemek istediginiz kelimeyi buyuk harflerle giriniz: ");
	gets(kelime);
S	uzunluk=strlen(kelime);
	for(i=0;i<uzunluk;i++)
	{
		if(kelime[i]>='A'&& kelime[i]<='Z')
		{
			kelime[i]='A'+ (kelime[i]-'A'+2)%26;
			
		}
		else if(kelime[i]>='a'&& kelime[i]<='z')
		{
			kelime[i]='a'+ (kelime[i]-'a'+2)%26;
		}
	}
	printf("Kelimenin sifrelenmis hali: %s\n",kelime);
	return 0;
	
}
