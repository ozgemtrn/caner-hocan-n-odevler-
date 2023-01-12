#include <stdio.h>
//Klavyeden girilen 2 matrisin çarpýmý
int main()
{
	int m, p, n, i, j, k, r;
	printf("Matrisler icin satir ve sutun sayisini, sirasiyla mxn ve nxp -n'yi 2 kez girmenize gerek yok- seklinde, aralarinda bosluk birakarak giriniz: ");
	scanf("%d %d %d", &m, &n, &p);
	int matris1[m][n], matris2[n][p], sonucMatrisi[m][p];
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<p; j++)
			sonucMatrisi[i][j]=0;
	}
	printf("Matris 1 icin eleman giriniz:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Matris1[%d][%d]=", i+1, j+1);
			scanf("%d", &matris1[i][j]);
		}
	}
	printf("Matris 2 icin eleman giriniz:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<p; j++)
		{
			printf("Matris2[%d][%d]=", i+1, j+1);
			scanf("%d", &matris2[i][j]);
		}
	}
	
	for(i=0; i<m; i++)
	{
		for(k=0; k<p; k++)
		{
			for(j=0; j<n; j++)
				sonucMatrisi[i][k]+=matris1[i][j]*matris2[j][k];
		}
	}
	
	printf("Matris1 ve Matris2'nin carpimi: \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<p; j++)
			printf("%d\t", sonucMatrisi[i][j]);
		printf("\n");
	}
	
	return 0;
}
