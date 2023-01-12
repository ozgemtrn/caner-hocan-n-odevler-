//Klavyeden girilen nxn tipindeki A,B,C matrislerini kullanarak verilen iþlemiyle D matrisini oluþturup bu matrisin izini bulan program
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int A[10][10],B[10][10],C[10][10],D[10][10],T1[10][10],T2[10][10],n,i,j,k,m;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d] = ",i,j);
			scanf("%d",&A[i][j]);
		}
    }
    for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("B[%d][%d] = ",i,j);
			scanf("%d",&B[i][j]);
		}
    }
    for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("C[%d][%d] = ",i,j);
			scanf("%d",&C[i][j]);
		}
    }
    for(k=0;k<n;k++)
	{
		for(m=0;m<n;m++)
		{
			T1[k][m]=B[m][k];
			T2[k][m]=C[m][k];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			D[i][j]=(A[i][j])*(T1[i][j]+T2[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",D[i][j]);
		}
		printf("\n");
	}
	int toplam=0;
	for(i=0;i<n;i++)
	{
		toplam+=D[i][i];
	}
	printf("Matris izi: %d",toplam);
    return 0;    
}
