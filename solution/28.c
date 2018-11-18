#include<stdio.h>
main()
{
	int x,y;
	printf("Enter value of X:");
	scanf("%d",&x);
	y=x!=0?(x>0?1:-1):0;
	printf("Value of Y is:%d",y);
}
