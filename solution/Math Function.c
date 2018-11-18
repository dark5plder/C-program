#include<stdio.h>
#include<math.h>
main()
{
	float a,b;
	printf("Enter a Real Number:");
	scanf("%f",&a);
	b=ceil(a);
	printf("%.2f\n",b);
	b=floor(a);
	printf("%.2f\n",b);
    b=abs(a);
    printf("%.2f",b);
}
