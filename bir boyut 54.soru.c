#include <stdio.h>
#include <math.h>

int main()
{
	int hue,saturation,value,c,m,y,k,i;
	float r,g,b,f,p,q,t;
	printf("renk tonu derecesini giriniz (H):");
	scanf("%d",&hue);
	printf("doygunluk yuzde degerini giriniz(S):");
	scanf("%d",&saturation);
	printf("parlaklik degerini giriniz(V):");
	scanf("%d",&value);
	if(saturation==0)
	{
		r=value;
		g=value;
		b=value;
		
	}
	else
	{
		if(hue==360)
			hue=0;
		else
			hue=hue/60;
		
		i=trunc(hue);
		f=hue-i;
		p=value*(1.0-saturation);
		q=value*(1.0-(saturation*f));
		t=value*(1.0-(saturation*(1.0-f)));
		
		if(i==0)
		{
			r=value;
			g=t;
			b=p;
		}
		else if(i==1)
		{
			r==q;
			g=value;
			b=p;
		}
		else if(i==2)
		{
			r=p;
			g=value;
			b=p;
		}
		else if(i==3)
		{
			r=p;
			q=t;
			b=value;
		}
		else if(i==4)
		{
			r=t;
			g=p;
			b=value;
		}
		else
		{
			r=value;
			g=p;
			b=q;
		}
	}	
		
	r=r*255;
	g=g*255;
	b=b*255;
	
	int max,w;
	
	if(r>g&&r>b)
		max=r;
	else if(g>r&&g>b)
		max=g;
	else 
		max=b;
		
	w=max/255;
	k=1-w;
	c=(w-r)/w;
	m=(w-g)/w;
	y=(w-b)/w;
	
	printf("\nC:%d",c);
	printf("\nM:%d",m);
	printf("\nY:%d",y);
	printf("\nK:%d",k);

	return 0;	
}
