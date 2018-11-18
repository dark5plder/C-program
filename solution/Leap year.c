#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter a year:");
	scanf("%d",&a);
	b=a%4;
	c=a%100;
	d=a%400;
	if(d==0)
		printf("Leap Year");
	else if(c==0)
		printf("Not Leap Year");
	else if(b==0)
		printf("Leap Year");
	else
		printf("Not Leap Year");
}
