#include<stdio.h>
main()
{
	int a=1,n,sum=0;
	printf("Enter final number:");
	scanf("%d",&n);
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}
	printf("1+2+3........+%d is=%d",n,sum);
}
