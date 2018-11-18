#include<stdio.h>//5.9.a//
main()
{
	int x,y;
	printf("Enter value of X:");
	scanf("%d",&x);
	if(x>=0)
	{
		if(x==0)
			printf("Y=0");
		else
			printf("Y=1");
	}
	else
	{
		printf("Y=-1");
	}
}
