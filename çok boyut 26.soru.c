//Klavyeden girilen nxn tipindeki matris yatay olarak döndüren program
#include <stdio.h>
int main ()
{
	int n,i,j;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	int A[n][n],B[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
			
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",A[i][j]);
						
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			B[i][j]=A[j][n-1-i];
		}
	}
	printf("Yeni olusan matris: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",B[i][j]);
						
		}
		printf("\n");
	}
}
