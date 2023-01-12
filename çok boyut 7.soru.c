//Klavyeden girilen nxn tipindeki A matrisinin belirtilen üssünü alan program
#include <stdio.h>
#include <math.h>
int main ()
{
	int A[10][10],n,k,i,j,ussu;
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
	printf("Ussu sayisini giriniz: ");
	scanf("%d",&k);
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			ussu=pow(A[i][j],k);
			printf("A[%d][%d]: %d \n",i,j,ussu);
		
		}
	}
	
}
