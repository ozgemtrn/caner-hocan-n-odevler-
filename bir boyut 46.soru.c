#include <stdio.h>
int main()
{
    char cumle[100];
 	int i;
	printf("Bir cumle giriniz:");
	gets(cumle);
	printf("Cumlenin mors kodu hali:\n");
	for(i=0;cumle[i]!='\0';i++)
	{
		if(cumle[i]=='a')
			printf(".- ");
		else if(cumle[i]=='b')
			printf("-... ");
		else if(cumle[i]=='c')
			printf("-.- ");
		else if(cumle[i]=='d')
			printf("-.. ");
		else if(cumle[i]=='e')
			printf(". ");
		else if(cumle[i]=='f')
			printf("..-. ");
		else if(cumle[i]=='g')
			printf("--. ");
		else if(cumle[i]=='h')
			printf(".... ");
		else if(cumle[i]=='i')
			printf("..");
		else if(cumle[i]=='j')
			printf(".--- ");
		else if(cumle[i]=='k')
			printf("-.- ");
		else if(cumle[i]=='l')
			printf(".-.. ");
		else if(cumle[i]=='m')
			printf("-- ");
		else if(cumle[i]=='n')
			printf("-. ");
		else if(cumle[i]=='o')
			printf("--- ");
		else if(cumle[i]=='p')
			printf(".--. ");
		else if(cumle[i]=='r')
			printf(".-. ");
		else if(cumle[i]=='s')
			printf("... ");
		else if(cumle[i]=='t')
			printf("- ");
		else if(cumle[i]=='u')
			printf("..- ");
		else if(cumle[i]=='v')
			printf("...- ");
		else if(cumle[i]=='y')
			printf("-.-- ");
		else if(cumle[i]=='z')
			printf("--.. ");
			
	}
return 0;
	
	
}
