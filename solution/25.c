#include<stdio.h>
main()
{
	int a,b,gcd,t;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter another number:");
	scanf("%d",&b);
	if(a==0)
	gcd=a;
		else if(b==0)
		gcd=b;
	else
	{
		while(b!=0){
			t=b;
			b=a%b;
			a=t;}
			gcd=a;
	}
	printf("%d is GCD",gcd);
}
