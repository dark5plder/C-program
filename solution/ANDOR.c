#include <stdio.h>
int main()
{
	int a=0,b=1,c;
	c=a&b;
	printf("%d AND %d=%d\n",a,b,c);
	c=a|b;
	printf("%d OR %d=%d",a,b,c);
	return 0;
}
