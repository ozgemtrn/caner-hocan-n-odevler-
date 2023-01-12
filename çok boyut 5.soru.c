#include<stdio.h>

main(){
	int A[10][10],i,n,j,k,a,b,c,d,sayac=0,B[10][10],C[10][10],D[10][10],toplam;
	printf("Lutfen Satir ve Sutun sinirini giriniz :");
	scanf("%d",&n);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("A[%d][%d]",i,j);
				scanf("%d",&A[i][j]);
			
			}
		}
		printf("Olusan matris \n");
		for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
		{	
			printf(" %d ",A[i][j]);
		}	
		printf("\n");
	}	
	while (sayac<n+1)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				
				if(i+1==n)
				{
				}
				else if(A[i+1][j]>A[i][j]){
					b=A[i][j];
					A[i][j]=A[i+1][j];
					A[i+1][j]=b;	
				}
			}
		}
		sayac++;
				}
	printf("Olusan matris \n");
		for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
		{	
			printf(" %d ",A[i][j]);
		}	
		printf("\n");
	}
			for(j=0;j<n;j++){
				B[0][j] = A[0][j];
}

					printf("Olusan B matrisi \n");
	
			for(j=0;j<n;j++)
		{	
			printf(" %d ",B[0][j]);
		}	
	
			for(j=0;j<n;j++){
				C[n-1][j] = A[n-1][j];
		printf("\n");
}
		printf("Olusan C matrisi \n");
			for(j=0;j<n;j++)
		{	
			printf(" %d ",C[n-1][j]);
		}	
		printf("\n");
	for(j=0;j<n;j++){
		D[1][j]=B[0][j]*C[n-1][j];
		}

		printf("Olusan D matrisi \n");
			for(j=0;j<n;j++)
		{	
			printf(" %d ",D[1][j]);
		}	
		printf("\n");		
}
