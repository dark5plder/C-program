#include<stdio.h>
main()
{
	int a,r=0,c;
	printf("Enter a Number:");
	scanf("%d",&a);
	c=a;
	for(;a!=0;)
	{
		r=r*10;
		r=r+a%10;
		a=a/10;
	}
	printf("Reverse of this number is:%d\n",r);
}
