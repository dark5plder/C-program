#include<stdio.h>
main()
{
    int i,n,a[100],p;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a position to insert:");
    scanf("%d",&p);
    if(i<0||i>n)
    {
        printf("Insert is impossible!");

    }
    else
    {
        for(i=n-1;i>=p;i--)

           a[i+1]=a[i];

        printf("Enter any number to insert:");
        scanf("%d",&a[p]);
        n++;
    }
    printf("After insert The array contains %d items and the array is:",n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
