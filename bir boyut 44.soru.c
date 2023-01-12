#include <stdio.h>
#include <stdlib.h>


int main()
{
	char cumle[100];
	int i;
	printf("Bir cumle giriniz:");
	gets(cumle);
	for(i=0;cumle[i]!='\0';i++)		
		printf("%X",cumle[i]);
	
	return 0;
	
}
