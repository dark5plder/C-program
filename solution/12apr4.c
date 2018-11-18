#include<stdio.h>
int small(int a,int b)
{
    /*if(a>b)
        return b;
    else
        return a;*/
  return (a>b)?b:a;


}
int main()
{
    int a,b,s;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    s=small(a,b);
    printf("%d",s);
}
