#include<stdio.h>
#include<math.h>
main()
{
	float a=0,b=0,num,sum,avg;
	while(a<5)
	{
		scanf("%f",&num);
		sum=sum+num;
		a++;
	}
	avg=sum/num;
	printf("Number:%d\tSum:%.2f\tAverage:%.2f",(int)a,sum,avg);
}
