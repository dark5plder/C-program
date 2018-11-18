#include<stdio.h>//5.2//
main()
{
	int a=100,b,count=0,sum=0;

	while(a<200)
	{
		if(a%7==0)
		sum=sum+a;
		if(a%7==0)
		count=count+1;
		a++;

	}
	printf("Count=%d\nSum=%d",count,sum);

}
