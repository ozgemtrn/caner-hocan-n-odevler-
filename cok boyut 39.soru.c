#include <stdio.h>

//Klavyeden girilen nxn matrisinin sat�r elemanlar�n� azalan, s�tun elemanlar�n� artan s�rada yazd�ran kod.

int main()
{
	int n, i, j, k, temp;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d", &n);
	
	int matris[n][n];
	printf("Matris icin eleman giriniz: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Matris[%d][%d]=", i+1, j+1);
			scanf("%d", &matris[i][j]);
		}
	}
	
	//sat�r elemanlar�n� azalan s�rada yazd�rma
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			for(k=j+1; k<n; k++)
			{
				if(matris[i][j]<matris[i][k])
				{
					temp=matris[i][j];
					matris[i][j]=matris[i][k];
					matris[i][k]=temp;
				}
			}
		}
	}
	
	//s�tun elemanlar�n� artan s�rada yazd�rma
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			for(k=j+1; k<n; k++)
			{
				if(matris[j][i]>matris[k][i])
				{
					temp=matris[j][i];
					matris[j][i]=matris[k][i];
					matris[k][i]=temp;
				}
			}
		}
	}
	
	printf("\nSatirlari azalan, sutunlari artan sirada dizilmis matrisiniz:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
