#include <stdio.h>
#include <math.h>

int main()
{
	int h;
	float s2,s1,l,v;
	printf("renk tonu derecesini giriniz(H): ");
	scanf("%d",&h);
	printf("doygunluk yuzdesini giriniz[0-1](S): ");
	scanf("%f",&s1);
	printf("parlaklik yuzdesini giriniz[0-1](V): ");
	scanf("%f",&v);
	if(l<(1-l))
		v=l+s1*l;
	else 
		v=l+s1*(1-l);
		
	if(v==0)
		s2=0;
	else
		s2=2-2*l/v;	
	printf("\nH:%d",h);
	printf("\nS:%.f",s2);
	printf("\nL:%.f",l);
	return 0;
	
}
