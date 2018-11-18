#include<stdio.h>
main()
{
	int a=1,n,sum=0;
	printf("Enter final number:");
	scanf("%d",&n);
	while(a<=n)
	{
		sum=sum+a;
		a=a+2;
	}
	printf("Sum 1+3+5+....+%d is =%d",n,sum);
}
