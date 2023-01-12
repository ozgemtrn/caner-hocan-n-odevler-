#include<stdio.h>
#include<string.h>
int main()
{
	char kelime[100];
	int i;
	printf("Kelimeyi giriniz:");
	scanf("%s",kelime);
	for(i=0;i<strlen(kelime);i++)
	{
		if(kelime[i]=='a' || kelime[i]=='e' || kelime[i]=='o' || kelime[i]=='i' || kelime[i]=='u')
		{
			kelime[i]+=3;
			printf("* %c",kelime[i]); 
		}
		else
		{
			printf("%c",kelime[i]);
		}
	}
    return 0;
}
