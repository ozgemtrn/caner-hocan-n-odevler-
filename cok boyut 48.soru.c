#include <stdio.h>
//Klavyeden girilen matrisin kendisiyle çarpýmýnýn birim matrise eþit olup olmadýðýný(kendine dönük matris) kontrol eden kod.
int main()
{
	int i, n, j, k;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d", &n);
	int matris[n][n], sonucMatrisi[n][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			sonucMatrisi[i][j]=0;
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Matris[%d][%d]=", i+1, j+1);
			scanf("%d", &matris[i][j]);	
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(k=0; k<n; k++)
		{
			for(j=0; j<n; j++)
				sonucMatrisi[i][k]+=matris[i][j]*matris[j][k];
		}  		
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d\t", sonucMatrisi[i][j]);
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i==j)
			{
				if(sonucMatrisi[i][j]==1)
					continue;
				else
				{
					j=n; i=n;
				}
			}
			else
			{
				if(sonucMatrisi[i][j]==0)
					continue;
				else
				{
					j=n; i=n;
				}
			}				
		}
	}
	
	if(j==n+1)
		printf("Girdiginiz matris, kendine donuk matris degildir.");
	else
		printf("Girdiginiz matris, kendine donuk bir matristir.");
	
	/*birim matris
	for(i=0; i<n; i++)
	{
		m[i][i]=1;
		for(j=0; j<n; j++)
		{
			if(j==i) 
				j++;
			m[i][j]=0;	
		}
	}
	 */
}
