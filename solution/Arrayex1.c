#include<stdio.h>
main()
{
    int n,b,a[100],i,p;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a position to delete:");
    scanf("%d",&b);
    for(i=b-1;i<n-1;i++)
        a[i]=a[i+1];
    printf("The array is:");
    for(i=0;i<n-1;i++)
        printf("%d ",a[i]);
}
