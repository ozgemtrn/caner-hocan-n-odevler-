#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	printf("Dizi icin eleman sayisi giriniz: ");
	scanf("%d",&n);
	int A[n],B[n];
	
	for(i=0; i<n; i++)
	{
		printf("Dizi icin eleman giriniz: ");
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<n; i++)
		B[i]=-A[n-i-1];
	
	printf("B dizisi: ");
	for(i=0; i<n; i++)
		printf("%d ",BS[i]);
		
	return 0;
}
