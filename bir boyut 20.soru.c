#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char cumle[100];
	int i;
	printf("Kucuk harflerle bir cumle giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);
	for(i=0; i<100; i++)
	{
		if(cumle[i]!=' ')
		{	cumle[i]-=32;
			break;	}
	}
	for(i; i<100; i++)
	{
		if(cumle[i]==' ' && cumle[i+1]!=' ')
		{
			cumle[i+1]-=32;
		}
	}
	printf("%s",cumle);
	return 0;
}
