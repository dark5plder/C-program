#include<stdio.h>
main()
{
    float a[100],sum=0,avg;
    int i,j,swap;
    printf("Enter marks of four class tests:\n");
    for(i=0;i<4;i++)
        scanf("%f",&a[i]);
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

        for(i=0;i<4;i++)
        printf("%f\t",a[i]);
}
