//Klavyeden girilen matris tipine g�re elemanlar�,0-9 aras�nda rastgele tamsay�lardan olu�an ve s�tun elemanlar� toplam� e�it olan program
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{
	int n,i,j,toplam=0,bolum;
	printf("Satir ve sutun sayisini giriniz: ");
	scanf("%d",&n);
	int A[n][n];
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			
			A[i][j]=rand() % 10 + 1;
			printf("A[%d][%d]= %d ",i,j,A[i][j]);
	    }
	    printf("\n");
    }
    int sum=A[0][0],flag=0;
    for (i=0;i<n;i++)
	 {
        for (j=0;j<n;j++) 
		{
            if(A[i][j]!=sum)
			{
                flag=1;
                break;
            }
        }
    }
    printf("\n");
    if (flag == 1) 
	{
        printf("E�it De�il\n");
    }
	else
	{
        printf("E�it\n");
    }
return 0;	
}








	
