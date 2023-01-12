#include <stdio.h>
#include <math.h>

int main()
{
	int h;
	float s2,s1,l,v;
	printf("renk tonu derecesini giriniz(H):");
	scanf("%d",&h);
	printf("doygunluk yuzdesini giriniz:[0-1](S)");
	scanf("%f",&s1);
	printf("parlaklik yuzdesini giriniz:[0-1](V)");
	scanf("%f",&v);
	l=v-v*s1/2;
	if(l==0||l==1)
		s2=0;
	else
	{
		if(l<(1-l))
			s2=(v-l)/l;
		else if(l-1<l)
			s2=(v-l)/(l-1);	
	}	
	printf("\nH:%d",h);
	printf("\nS:%.f",s2);
	printf("\nL:%.f",l);
	return 0;
	
}
