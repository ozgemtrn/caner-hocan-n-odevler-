//Klavyeden girilen nxn tipindeki matrisin her satýrýndaki en büyük elemanlarý bulup listeleyen program
#include <stdio.h>
int main ()
{
	int n,i,j,sayac=0,temp;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	int A[n][n],B[n];
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
		max[i]=A[i][0];
		for(j=1;j<n;j++)
		{
			if(A[i][j]>max[i])
			{
				max[i]=A[i][j];
			}
		}
	}
	printf("En buyuk elemanlari: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",max[i]);
	}
	
	return 0;																															
}
