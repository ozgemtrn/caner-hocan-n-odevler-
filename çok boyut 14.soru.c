/*Klavyeden girilen ve ekran�n ortas�na yaz�lan kelimenin yar�s�n� harf harf ortadan yukar�
yar�s�n� da ortadan a�a��ya do�ru 1 s aral�klarla kayd�ran program */
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


