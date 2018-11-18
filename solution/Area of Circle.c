#include <stdio.h>
int main()
{	double radius,area,pi=3.1416;
	printf("Enter the Radius=");
	scanf("%lf",&radius);
	area=pi*radius*radius;
	printf("The Area is=%.2lf",area);
	return 0;
}
