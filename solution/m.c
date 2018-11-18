#include<stdio.h>
#include<ctype.h>
main()
{
	char a,b;
	printf("Enter a character\n");
	a=getchar();
	if(isalpha(a)>0)
	{
		printf("This is a letter");
	}
	else
		if(isdigit(a))
	{
		printf("This is a digit");
	}
	else
	{
		printf("This is not alpha numeric");
	}
}
