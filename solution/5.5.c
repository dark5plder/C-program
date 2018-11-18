#include<stdio.h>//5.5//
main()
{
	int m,p,c,t,total_mp;
	printf("Marks of Mathematics:");
	scanf("%d",&m);
	printf("Marks of Physics:");
	scanf("%d",&p);
	printf("Marks of Chemistry:");
	scanf("%d",&c);
	t=m+c+p;
	if(m>=60&&p>=50&&c>=40&&t>=200)
	{
		printf("The candidate is Eligible");
	}
	else if(total_mp>=150)
	{
		printf("The candidate is Eligible");
	}
	else
	{
		printf("The candidate is Eligible");
	}
}
