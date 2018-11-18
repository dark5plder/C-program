#include<stdio.h>
int reverse(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;

    }
    return r;
}
void main()
{
    int n;
    printf("Enter any positive integer :");
    scanf("%d",&n);
    printf("\n Reverse of %d=%d",n,reverse(n));
}
