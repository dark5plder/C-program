#include<stdio.h>
main()
{
	int a=2,n,sum=0;
	printf("Enter final number:");
	scanf("%d",&n);
	while(a<=n)
	{
		sum=sum+a;
		a=a+2;
	}
	printf("Sum of 2+4+6+8...%d is=%d",n,sum);
}
