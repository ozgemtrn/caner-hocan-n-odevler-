#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char cumle[100];
	int i=0,j=0;
	printf("Bir cumle giriniz: \n");
	gets(cumle);
	while(cumle[i]!='\0')
	{
		if(cumle[i]==','||cumle[i]==';'||cumle[i]==':'||cumle[i]==' ')
			cumle[i]='*';
		
	
		i++;
		
	}
	printf("\nCumlenin yeni hali: %s",cumle);
	
	return 0;
}
