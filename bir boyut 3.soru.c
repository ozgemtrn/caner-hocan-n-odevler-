#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, temp;
	printf("Diziler icin eleman sayisi giriniz: ");
	scanf("%d", &n);
	int A[n],B[n],C[n],D[n];	
	for(i=0; i<n; i++)
	{
		printf("A dizisinin elemanlarini giriniz: ");
		scanf("%d", &A[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("B dizisinin elemanlarini giriniz: ");
		scanf("%d", &B[i]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("C dizisinin elemanlarini giriniz: ");
		scanf("%d", &C[i]);
	}
	
	for(i=0; i<n; i++)
		d[i]=a[i]+b[i]-c[i];
	
	for(i=0; i<n; i++)
	{
		if(d[i]<d[i+1])
		temp=d[i];
		d[i]=d[i+1];
		d[i+1]=temp;
	}
	
	printf("\nD dizisi: ");
	for(i=0; i<n; i++)
		printf("%d ",D[i]);
		
	return 0;	
}
