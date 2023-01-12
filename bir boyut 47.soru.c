#include <stdio.h>


int main()
{
	char cumle[100];
	int i,j;
	printf("Bir mesaj giriniz:");
	gets(cumle);
	printf("ITA1 sifreli hali:\n");
	for(i=0;cumle[i]!='\0';i++)
	{
		if(cumle[i]=='a')
			printf("00001 ");
		else if(cumle[i]=='b')
			printf("01100 ");
		else if(cumle[i]=='c')
			printf("01101 ");
		else if(cumle[i]=='d')
			printf("01111 ");
		else if(cumle[i]=='e')
			printf("00010 ");
		else if(cumle[i]=='f')
			printf("01110 ");
		else if(cumle[i]=='g')
			printf("01010 ");
		else if(cumle[i]=='h')
			printf("01011 ");
		else if(cumle[i]=='i')
			printf("00110 ");
		else if(cumle[i]=='j')
			printf("01001 ");
		else if(cumle[i]=='k')
			printf("11001 ");
		else if(cumle[i]=='l')
			printf("11011 ");
		else if(cumle[i]=='m')
			printf("11010 ");
		else if(cumle[i]=='n')
			printf("11110 ");
		else if(cumle[i]=='o')
			printf("00111 ");
		else if(cumle[i]=='p')
			printf("11111 ");
		else if(cumle[i]=='r')
			printf("11100 ");
		else if(cumle[i]=='s')
			printf("10100 ");
		else if(cumle[i]=='t')
			printf("10101 ");
		else if(cumle[i]=='u')
			printf("00101 ");
		else if(cumle[i]=='v')
			printf("10111 ");
		else if(cumle[i]=='y')
			printf("00100 ");
		else if(cumle[i]=='z')
			printf("10011 ");
		else if(cumle[i]==' ')
			printf("10000 ");
		
	}
	return 0;	
	
}
