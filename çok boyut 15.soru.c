//Klavyeden girilen bir kelimeyi,ekrana dikey olarak yazdýran program
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char A[100];
	int len,i;
	printf("Kelimeyi giriniz: ");
	scanf("%s",A);
	len=strlen(A);
	for(i=0;i<len;i++)
	{
		printf("%c\n",A[i]);	
	}
	
}
