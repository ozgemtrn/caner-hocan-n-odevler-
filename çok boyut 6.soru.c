/*Klavyeden girilen nxn tipindeki A matrisinin tüm elemanlarýnýn karelerini alarak B matrisini ve tüm elemanlarýnýn 
kareköklerini alarak C matrisini oluþturup bu matrisini oluþturup bu matrisleri çarpýp D matrisini bulan program*/
#include <stdio.h>
#include <math.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],D[10][10],n,i,j;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]= ",i,j);
			scanf("%d",&A[i][j]);		
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			B[i][j]=A[i][j]*A[i][j];
	    }
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			C[i][j]=sqrt(A[i][j]);
	    }
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			D[i][j]=B[i][j]*C[i][j];
			printf("D[%d][%d]= %d \n",i,j,D[i][j]);
	    }
	}
	return 0;
}
