#include<stdio.h>
main()
{
	int i,space,rows,k=0;
	printf("Enter row number:");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i);
	{
		for(space=1;space<=rows-1;++space)
		{
			printf(" ");

		while(k!=i)
		{
			printf(" * ");
			++k;
		}

		}printf("\n");
	}

}
