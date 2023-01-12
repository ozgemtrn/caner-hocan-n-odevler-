//Klavyede girilen mxn tipindeki A matrisinde kaç tane pozitif deðere sahip eleman olduðunu bulup yazdýran program
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[10][10],i,j,n,m,B[20],k;
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
	k=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i][j]>0)
			{
			   k++;
			}
		
		}
    }
    printf("%d kadar pozitif eleman vardir.",k);
}
