#include<stdio.h>
main()
{
	int a[100][100],m,n,i,j;
	printf("Enter Row number:");
	scanf("%d",&m);
	printf("Enter Column number:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}printf("\n");
	}

}
