#include<stdio.h>//5.3//
main()
{
	int a,b,c,d,m,n,e;
	float x1,x2;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	printf("Enter d:");
	scanf("%d",&d);
	printf("Enter m:");
	scanf("%d",&m);
	printf("Enter n:");
	scanf("%d",&n);
	e=(a*d-b*c);
	if(e==0)
	{
		printf("NO SOLUTION");
	}
	else
	{	x1=(m*d-b*n)/e;
		x2=(n*a-m*c)/e;
		printf("X1 is=%.2f and X2 is=%.2f",x1,x2);
	}
}
