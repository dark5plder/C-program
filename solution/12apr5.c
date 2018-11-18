#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    c=(a>b)?b:a;
    printf("Small:%d",c);
}
