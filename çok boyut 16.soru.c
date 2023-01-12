//Klavyeden girilen mxn tipindeki A matrisinde kaç tane birbirinde farklý deðer olduðunu veren program
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int m,n,A[10][10],i,j,k,a,sayac[100];
	printf("Satir sayisini giriniz: ");
	scanf("%d",&m);
	printf("Sutun sayisini giriniz: ");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sayac[A[i][j]]++;			
			if(sayac[A[i][j]]==1)
			{
				a++;
			}
		}
	}
	printf("%d tane farkli sayi vardir.\n",a);
}

