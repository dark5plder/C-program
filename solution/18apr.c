#include<stdio.h>
int reverse(int n)
{   int r=0;
    while(n>0)
    {
    r=r*10+n%10;
    n=n/10;
    }
    return r;
}
main()
{
    int a=543,rev;
    rev=reverse(a);
    printf("%d",rev);
}
