#include<stdio.h>
main()
{
	int i,j,k;
	k=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<k;j++)
			printf(" ");
			k--;
			for(j=1;j<=2*i-1;j++)
				printf("*");
			printf("\n");
	}
}
