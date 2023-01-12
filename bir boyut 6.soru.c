#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	printf("Dizi eleman sayisiniss giriniz: ");
	scanf("%d",&n);
	int A[n];
	
	for(i=0; i<n; i++)
	{
		if(i%2==0)
		A[i]=1;
		else if(i%2==1)
		A[i]=0;
	}
	
	printf("A dizisi: ");
	for(i=0; i<n; i++)
		printf("%d ",A[i]);
		
	return 0;
}
