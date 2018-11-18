#include<stdio.h>
main()
{
	int marks,expression;
	printf("Enter Marks:");
	scanf("%d",&marks);
	expression=marks/10;
	switch(expression)
	{
		case 10:
			printf("A++");
			break;
			case 9:
			printf("A+");
			break;
			case 8:
			printf("A");
			break;
			case 7:
			printf("B");
			break;
			case 6:
			printf("C");
			break;
			case 5:
			printf("D");
			break;
			case 4:
			printf("E");
			break;
			default:
			printf("FAIL");
	}
}
