//Klavyeden girilen nxn tipindeki matrisin her sütunundaki en küçük elemanlarý bulup listeleyen program
#include <stdio.h>
int main ()
{
	int n,i,j;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	int A[n][n],min[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
			
		}
	}
	for(j=0;j<n;j++)
	{
		min[j]=A[0][j];
		for(i=1;i<n;i++)
		{
			if(A[i][j]<min[j])
			{
				min[j]=A[i][j];
			}
		}
	}
	printf("En kucuk elemanlari: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",min[i]);
	}
	
	
	
}
