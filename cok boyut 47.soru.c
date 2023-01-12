#include <stdio.h>

//Klavyeden girilen matrisin kendisiyle çarpýlýp yine kendisine eþit mi(Eþkuvvetli Matris) diye kontrol eden kod.

int main()
{
	int i, n, j, k;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d", &n);
	int matris[n][n], sonucMatrisi[n][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			sonucMatrisi[i][j]=0;
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Matris[%d][%d]=", i+1, j+1);
			scanf("%d", &matris[i][j]);	
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(k=0; k<n; k++)
		{
			for(j=0; j<n; j++)
				sonucMatrisi[i][k]+=matris[i][j]*matris[j][k];
		}  		
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(matris[i][j]!=sonucMatrisi[i][j])
			{
				printf("Girdiginiz matris, eskuvvetli bir matris degildir.");
				i=n; j=n;
			}
		}
	}
	
	if(j!=n+1)
		printf("Girdiginiz matris, eskuvvetli bir matristir.");
	
	return 0;
}
