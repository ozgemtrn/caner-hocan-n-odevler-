#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, s2=0, s3=0;
	float ort;
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);
	int A[n], B[n], C[n];
	for(i=0; i<n; i++)
	{
		printf("Dizinin elemanlarini giriniz: ");
		scanf("%d", &A[i]);
		ort+=A[i];
	}
	ort/=n;
	for(i=0; i<n; i++)
	{
		if(A[i]<ort)
		{
		B[s2]=A[i];
		s2++;  }
		else if(A[i]>ort)
		{
		C[s3]=A[i];
		s3++;  }
	}
	printf("Girdiginiz dizi: ");
	for(i=0; i<n; i++)
	printf("%d ", A[i]);
	printf("\nDizinin ortalamasi: %g", ort);
	printf("\nOrtalamadan kucuk dizi elemanlari: ");
	for(i=0; i<s2; i++)
	printf("%d ",B[i]);
	printf("\nOrtalamadan buyuk dizi elemanlari: ");
	for(i=0; i<s3; i++)
	printf("%d ", C[i]);
	
	return 0;
}
