#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{   
    char cumle[200];
	int i;
	printf("Buyuk harflerle bir cumle giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);
	for (i=1; i<200; i++)
	{
		if (cumle[i]=='\0')
			break;
		else 
	}
	printf("%s", cumle);
s	return 0;
}
