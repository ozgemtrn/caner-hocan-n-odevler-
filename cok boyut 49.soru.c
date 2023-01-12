#include <stdio.h>
//Klavyeden girilen matrisin her satýrdaki eleman toplamýnýn 1'e eþit olup olmadýðýný(Markov matrisi) kontrol eden kod.
int main()
{
	int n, m, i, j, toplam=0;
	printf("Matris icin satir sayisi giriniz: ");
	scanf("%d", &n);
	printf("Matris icin sutun sayisi giriniz: ");
	scanf("%d", &m);
	int matris[n][m];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Matris[%d][%d]=", i+1, j+1);
			scanf("%d", &matris[i][j]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
			toplam+=matris[i][j];
		if(toplam!=1)
			i=n;
		toplam=0;
	}
	
	if(i==n+1)
		printf("Girdiginiz matris, Markov matrisi degildir.");
	else
	printf("Girdiginiz matris, bir Markov matrisidir.");
	
	return 0;
}
