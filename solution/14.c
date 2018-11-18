#include<stdio.h>
main()
{	int a,b,c;
	printf("Enter three Integers\n");
	scanf("%d %*d %d",&a,&b,&c);
	printf("%d %d %d",a,b,c);
}
