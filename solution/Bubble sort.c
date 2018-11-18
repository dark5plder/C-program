#include<stdio.h>
main()
{
    int a[100],n,i,j,swap;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-i-1);j++)
    {
        if(a[j]>a[j+1])
        {
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap;
        }
    }
    }
            printf("Sorted list\n");
            for(i=0;i<n;i++)
                printf("%d\t",a[i]);
            return 0;

    }

