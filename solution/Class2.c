#include <stdio.h>
int main()
{
	double a,b,c;
	printf("Enter a number=");
	scanf("%lf",&a);
	printf("Enter another number=");
	scanf("%lf",&b);
	c=a+b;
	printf("%.0lf+%.0lf=%.0lf\n",a,b,c);
	c=a-b;
	printf("%.0lf-%.0lf=%.0lf\n",a,b,c);
	c=a*b;
	printf("%.0lfX%.0lf=%.0lf\n",a,b,c);
	c=a/b;
	printf("%.0lf/%.0lf=%.1lf",a,b,c);
}
