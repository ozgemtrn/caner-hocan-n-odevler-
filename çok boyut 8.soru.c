//Klavyeden girilen nxn tipindeki A matrisindeki pozitif elemanlarýný B ve negatif elemanlarýný C dizisine atan program
#include <stdio.h>
int main ()
{
	int A[10][10],B[10][10],C[10][10],n,i,j,k;
	printf("Satir ve sutun sayilarini giriniz: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d] = ",i,j);
			scanf("%d",&A[i][j]);
		}
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(A[i][j]>0)
    		{
    			B[i][j]=A[i][j];
			    printf("B[%d][%d]= %d\n",i,j,B[i][j]);
			}
			else
			{
				C[i][j]=A[i][j];
				printf("C[%d][%d]= %d\n",i,j,C[i][j]);
			}
		}
    }
    return 0;	
}
