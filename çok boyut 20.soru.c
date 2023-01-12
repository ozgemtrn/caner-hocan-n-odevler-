#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	int m,n,i,j,num[m],sonuc=0;;
	printf("Sinif mevcudunu giriniz: ");
	scanf("%d",&m);
	printf("Ders sayisini giriniz: ");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		printf("%d. ogrencinin numarasi: ",i+1);
	    scanf("%d",&num[i]);
	}
	printf("\n");
	int A[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]= ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n\n");
	float toplam[n];
	for(j=0;j<n;j++)
	{
		toplam[j]=0;
		for(i=0;i<m;i++)
		{
			toplam[j]+=A[i][j];
		}
		printf("%d.dersin aritmetik ortalamasi: %.f dir. \n",j+1,toplam[j]/(float)m);
	}
	printf("\n");
	float carpma;
	float geo_ort;
	for(j=0;j<n;j++)
	{
		carpma=1;
		for(i=0;i<m;i++)
		{
			carpma*=A[i][j];
			geo_ort=pow(carpma,(1.0/(m)));
		}
		printf("%d.dersin geometrik ortalamasi: %.f dir. \n",j+1, geo_ort);
	}
	printf("\n");
	float hrm_top;
	float hrm_ort;
	for(j=0;j<n;j++)
	{
		hrm_top=0;
		for(i=0;i<m;i++)
		{
			hrm_top+=((hrm_top+1)/(A[i][j]));
			hrm_ort=((float)m/(hrm_top));
		}
		printf("%d.dersin harmonik ortalamasi: %f dir. \n", j+1, hrm_ort);
	}
	printf("\n\n");
	int not[n];
	float toplam2,not_ort;
	for(i=0;i<m;i++)
	{
		toplam2=0;
		for(j=0;j<n;j++)
		{
			toplam2+=A[i][j];
			not_ort=((toplam2)/(float)n);
		}
		printf("%d nolu ogrencinin not ortalamasi: %.f dir. \n",num[i], not_ort);
		not[i]=not_ort;
	}
	printf("\n\n");
	int max_ort=not[0],min_ort=not[0],maxort_no=num[0],minort_no=num[0];
	for(i=1;i<m;i++)
	{
		
			if(not[i]>max_ort)
			{
				max_ort=not[i];
				maxort_no=num[i];
			}
			else if(not[i]<min_ort)
			{
				min_ort=not[i];
				minort_no=num[i];
			}
	}
	printf("%d en yuksek ortalamadir ve %d nolu ogrencidir.\n",max_ort,maxort_no);
	printf("%d en dusuk ortalamadir ve %d nolu ogrencidir.\n",min_ort,minort_no);
    printf("\n\n");
    
    for(j=0;j<n;j++)
    {
    	int max_not=A[j][0],min_not=A[j][0];
    	for(i=0;i<m;i++)
    	{
    		if(max_not<A[i][j])
    		{
    			max_not=A[i][j];
    			
			}
			if(min_not>A[i][j])
			{
				min_not=A[i][j];
			}	
		}
		sonuc=max_not-min_not;
		printf("%d.dersin max ve min notlari arasindaki farki: %d\n",j+1,sonuc);	
	}
	return 0;
}
	
	
	
	



