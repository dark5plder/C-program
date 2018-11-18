#include<stdio.h>
main()
{
	int a=100,b,count=0,sum=0;

	while(a<200)
	{

		if(a%7==0)
		count=count+1;
		sum=sum+a;
		a++;
	}
	printf("Count=%d\nSum=%d",count,sum);

}
