#include<stdio.h>
main()
{
	int i=1,n,f=1;
	printf("Enter a number to calculate factorial:");
	scanf("%d",&n);
	while(i<=n)
	{
		f=i*f;
		i++;
	}
	printf("\nFactorial of %d is=%d\n",n,f);
}
