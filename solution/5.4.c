#include<stdio.h>//5.4//
main()
{
	int marks,i=1,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
	printf("Enter marks:");
	for(;i<=10;i++)
	{
		scanf("%d",&marks);
		if(marks>80&&marks<100)
			a=a+1;
		if(marks>60&&marks<100)
			b=b+1;
		if(marks>40&&marks<100)
			c=c+1;
		if(marks>0&&marks<40)
			d=d+1;
		if(marks>60&&marks<80)
			e=e+1;
		if(marks>40&&marks<60)
			f=f+1;

	}
	printf("Above 80:%d\nAbove 60:%d\nAbove 40:%d\nBelow 40:%d\nWithin 81-100:%d\nWithin 61-80:%d\nWithin 41-60:%d\nWithin 0-40:%d",a,b,c,d,a,e,f,d);

}
