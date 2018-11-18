#include<stdio.h>
main()
{
	int a=1,b=1,n=8;
	printf("%d",a);
	while(b<=n)
	{
		printf("+%d",a);
		printf("/%d",b);
		b++;
	}
}
