#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int n, i;
	printf("Dizi eleman sayisini giriniz: ");
	scanf("%d", &n);
	int A[n],B[n],C[n];
	
	for(i=0; i<n; i++)
	{
		printf("A dizisi icin eleman giriniz: ");
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<n; i++)
	{
		B[i]=A[i]*A[i];
		C[i]=sqrt(A[i]);
	}
	
	printf("B ve C dizisinin skaler carpimi: ");
	for(i=0; i<n; i++)
		printf("%d ",B[i]*C[i]);SS
		
	return 0;
}
