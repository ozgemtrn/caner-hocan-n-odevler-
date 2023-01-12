#include <stdio.h>
#include <stdlib.h>

/*Çok Boyutlu Soru 37: Klavyeden girilen satýr sayýsýna göre 
	1
	3	2
	6	2	3
	10	2	3	4
	15	2	3	4	5 ...      	þeklinde üçgen yazdýran kod.*/
	
int main()
{
	int n, i, j;
	printf("Yazilmasini istediginiz satir sayisini giriniz: ");
	scanf("%d", &n);
	int a[n];
	a[0]=1;
	for(i=1; i<n; i++)
		a[i]=i+1;
	
	printf("%d\n", a[0]);
	
	for(i=1; i<n; i++)
	{	
		a[0]+=a[i];
		for(j=0; j<i+1; j++)
			printf("%d\t", a[j]);
		printf("\n");
	}
	
	return 0;
}
