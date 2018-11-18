#include<stdio.h>
main()
{
	int a,b,c,d;
	float e,f,g,h;
	printf("Enter Number of four class test:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	e=d+b+c;
	f=a+c+d;
	g=a+b+d;
	h=a+b+c;
	if(a<b&&a<c&&a<d)
		printf("Average is:%.2f",e/3);
	else if(b<a&&b<c&&b<d)
		printf("Average is:%.2f",f/3);
	else if(c<a&&c<b&&c<d)
		printf("Average is:%.2f",g/3);
	else if(d<a&&d<b&&d<c)
		printf("Average is:%.2f",h/3);
}
