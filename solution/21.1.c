#include<stdio.h>
main()
{
	int i,n,a[100],sum=0;
	printf("How many numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum=%d",sum);
}
