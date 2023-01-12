//Klavyeden girilen matrisin,ana ile yedek köþegen üzerindeki elemanlarýný karþýlýklý olarak deðiþtiren program
#include <stdio.h>
int main() 
{
	int i,j,n,temp;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	int A[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
    i=0;j=0;
    while(i<n)
    {
    	temp=A[i][j];
    	A[i][j]=A[i][n-1-j];
    	A[i][n-1-j]=temp;
    	i++;
    	j++;
	}
	printf("Olusan matris: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",A[i][j]);
		}
		printf("\n");
	}
	
    
    return 0;
}



