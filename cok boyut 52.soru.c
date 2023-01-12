#include <stdio.h>
//Klavyeden girilen nxn matrisin ana köþegenine göre elemanlarýnýn yerlerini deðiþtiren kod. 
int main()
{
	int n, i, j, temp;
	printf("Matris(nxn) icin satir/sutun sayisi(n) giriniz: ");
	scanf("%d", &n);
	int matris[n][n];
	printf("Matris icin eleman girisi yapiniz: \n");
	
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
		for(j=i; j<n; j++)
		{
			if(i==j)
				continue;
			else 
			{
				temp=matris[i][j];
				matris[i][j]=matris[j][i];
				matris[j][i]=temp;
			}
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d\t", matris[i][j]);
		printf("\n");
	}
	
	return 0;
}
