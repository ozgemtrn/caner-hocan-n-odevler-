#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j;
	printf("Dizi eleman sayisini giriniz: \n");
	scanf("%d",&n);
	int A[n], eleman[n];
	
	for(i=0; i<n; i++)
		eleman[i]=0;
	
	for(i=0; i<n; i++)
	{	
		printf("Dizi elemanlarini giriniz: ");
		scanf("%d", &A[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(A[i]==A[j])
			eleman[i]++;
		}
	}
	for(i=0; i<n; i++)
	printf("%d. eleman dizide %d kez tekrar etmistir.\n", i+1, eleman[i]);
	
	return 0;
}
