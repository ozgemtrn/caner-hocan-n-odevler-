#include <stdio.h>
//Klavyeden girilen matrisin elemanlarýnýn tek ve çift sayý olarak daðýlýmýný veren kod.
int main()
{
	int m, n;
	float ciftler=0.0, tekler=0.0;
	printf("Matris icin satir sayisi giriniz: ");
	scanf("%d", &m);
	printf("Matris icin sutun sayisi giriniz: ");
	scanf("%d", &n);
	int matris[m][n], i, j;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Matris[%d][%d]=", i+1, j+1);
			scanf("%d", &matris[i][j]);
		}
	}
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(matris[i][j]%2==0)
				ciftler++;
			else 
				tekler++;
		}
	}
	
	printf("Matristeki cift sayilarin yuzdelik dagilimi=%g\nMatristeki tek sayilarin yuzdelik dagilimi=%g", ciftler/(m*n)*100, tekler/(m*n)*100);
	
	return 0;
}
