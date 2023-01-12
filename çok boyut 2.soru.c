//Klavyeden girilen nxn tipindeki A matrisini,transpozesiyle çarpýp B matrisini oluþturan ve bu B matrisinin en büyük ve en küçük elemanýný bulan program
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int A[10][10],B[10][10],T[10][10],n,i,j,k,m;
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
	for(k=0;k<n;k++)
	{
		for(m=0;m<n;m++)
		{
			T[k][m]=A[m][k];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			B[i][j]=(T[i][j]*A[i][j]);
		}
	}
	printf("Olusan Matris \n");
	for (k=0;k<n;k++)
	{
		for (m=0;m<n;m++)
		{
			printf(" %d ",B[k][m]);
		}
		printf("\n");
	}
	int max=B[0][0];
	int min=B[0][0];
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(B[i][j]>max)
			{
				max=B[i][j];
			}
		    else if(B[i][j]<min)
			    min=B[i][j];
		}
	}
	printf("En buyuk eleman: %d \nEn kucuk eleman: %d",max,min);
	
	
	
	
	return 0;
	
}
