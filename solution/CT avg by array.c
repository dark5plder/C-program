#include<stdio.h>
main()
{
    int i,j,swap;
    double a[100],sum=0.0,avg;
    printf("Enter marks of four class tests:\n");
    for(i=0;i<4;i++)
        scanf("%lf",&a[i]);
    for(i=0;i<(4-1);i++)
    {
        for(j=0;j<(4-i-1);j++)
    {
        if(a[j]>a[j+1])
        {
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap;
        }
    }
    }
           printf("\n Sorted list:");
           for(i=0;i<4;i++)
            printf("%lf\t",a[i]);
    for(i=1;i<4;i++)
    {
        sum=sum+a[i];
    }
avg=sum/3;
printf("%.2lf",avg);
                return 0;


    }


