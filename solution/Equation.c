#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,e,f,g,h;
	printf("Enter a=");
	scanf("%f",&a);
	printf("Enter b=");
	scanf("%f",&b);
	printf("Enter c=");
	scanf("%f",&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		h=-b/2*a;
		printf("x is=%.2f",h);
	}
	else if(d<0)
	{
		printf("Complex Number");
	}
	else if(d>0)
	{
		e=sqrt(d);
		f=(-b+e)/2*a;
		g=(-b-e)/2*a;
		printf("Value of x1 is=%.2f and x2 is=%.2f",f,g);
	}
}
