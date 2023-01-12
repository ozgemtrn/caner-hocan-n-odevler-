#include <stdio.h>
#include <math.h>

//Klavyeden girilen satýr sayýsýna göre Pascal üçgenindeki ilgili satýr sayýsýndaki elemanlarýn toplamý.

int main()
{
	int n, sonuc;
	printf("Pascal ucgenindeki eleman toplami istediginiz satiri giriniz: ");
	scanf("%d", &n);
	
	sonuc=pow(2, n-1);
	printf("%d. satirdaki elemanlarin toplami: %d", n, sonuc);
	
	return 0;
}
