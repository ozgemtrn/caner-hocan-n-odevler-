/*Klavyeden girilen ve ekranýn ortasýna yazýlan kelimenin yarýsýný harf harf ortadan yukarý
yarýsýný da ortadan aþaðýya doðru 1 s aralýklarla kaydýran program */
#include <stdio.h>
#include <string.h>
#include <windows.h> 
int main (void)
{
	char A[100];
	int len,i;
	printf("Kelimeyi giriniz: ");
	scanf("%s",A);
	len=strlen(A);
	for(i=0;i<len/2;i++)
	{
		printf("%c\n",A[i]);
		Sleep(1000);	
	}
	system("cls");
	for(i=len/2;i<len;i++)
	{
		printf("%c\n",A[i]);
		Sleep(1000);
	}
}


