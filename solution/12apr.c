#include<stdio.h>
int max(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
            return a;

    else
        return c;
}
else
{
    if(b>c)
        return b;
    else
        return c;
}
}
void main()
{
    int a,b,c,d;
    printf("Enter values of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
d=max(a,b,c);
    printf("Maximum=%d",d);
}
