#include<stdio.h>
int factorial(int n)
{int fact;

        if(n==1)
        return(1);
    else
        fact=n*factorial(n-1);
    return (fact);
}
main()
{
    int a,b;
    scanf("%d",&a);
    b=factorial(a);
    printf("%d",b);
}
