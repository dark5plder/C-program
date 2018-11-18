#include<stdio.h>
main()
{
	int i,sum=0;
	for(i=0;i<=10;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("\nSum=%d",sum);
}
