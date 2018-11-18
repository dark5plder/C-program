#include<stdio.h>
main()
{
	int a,b,c=31;
	printf("Enter an integer in Decimal:");
	scanf("%d",&a);
		while(c>=0)
		{	b=a>>c;
			c--;
		if(b&1)
			printf("1");
		else
			printf("0");
		}

}
