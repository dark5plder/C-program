#include<stdio.h>
main()
{
	double load,area=39.04,stress,n=1;

	while(n<=54)
	{	printf("Enter load:");
		scanf("%lf",&load);
		stress=load/area;
		printf("Stress:%lf",stress);
		printf("\n");
		n++;
	}
}
