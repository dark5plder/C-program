#include<stdio.h>
main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}printf("\n");
		printf("\n");
		for(j=5;j>=1;j--)
		{
			printf(" %d ",j);
		}
	}
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}printf("\n");
	}
}

/*for(j=0;j<=i;j++)
		{
			printf(" %d ",i);
		}*/
