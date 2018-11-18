#include<stdio.h>
main()
{
	int a,sum=0,b;
	printf("Enter a number:");
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		a=b%10;
		b=b/10;
		sum=sum+a;
	}
	printf("Sum of the digits is:%d",sum);
}
