#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
 {
	int i,j,k,kenar;
	printf("Eskenar ucgenin kenar uzunlugunu 1-20 arasinda girin: ");
	scanf("%d",&kenar);
	
	for(i=1;i<=kenar;i++)
	{
		for(j=kenar;j-i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		
		printf("\n");
	}
	return 0;
}
