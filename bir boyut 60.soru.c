//ROT13 þifreleme//
#include<stdio.h>
#include<conio.h>
#include<locale.h> 
 
int main (void)
{
    int i,j,k;
 	int sayi;
 	char a[100];
 	char x[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
 	printf("Sifrelenecek yaziyi giriniz : ");
 	while((a[k]=getchar())!='\n')
        k++ ;
 	printf("kaç harf otelenecegini giriniz : ");
	scanf("%d",&sayi); 
	for(i=0;i<k;i++)
	{
		for(j=0;j<26;j++)
		{
		
		if(a[i]==x[j])
		  {
			j=j+sayi;
			j=j % 26;
			a[i]=x[j]; 
			break;	
		  }
	    }
	}
 	printf("%s",a);
    getch();
    return 0;
}
