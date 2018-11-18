#include<stdio.h>
main()
{
	char ch;
	printf("Enter a Letter:");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is Vowel",ch);
		break;
	default:
	printf("%c is not Vowel",ch);
	}
}
