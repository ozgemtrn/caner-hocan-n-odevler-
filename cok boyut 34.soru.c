#include <stdio.h>

//Dýþarýdan alýnan üst üçgensel matrisin ve ayný matrisin simetrik pascal gösterimini ekrana yazdýran kod.

int main()
{
	int n, i, j;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d", &n);
	int a[n][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			a[i][j]=0;
	}
	
	printf("\nMatriste ust ucgen icin eleman giriniz: \n");
	for(i=0; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			printf("Matris[%d][%d]=", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nGirdiginiz matrisin ust ucgen gosterimi:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			a[j][i]=a[i][j];
		}
	}
	
	printf("\nGirdiginiz matrisin simetrik Pascal gosterimi:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
	return 0;
}
