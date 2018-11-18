#include<stdio.h>
#include<math.h>
main()
{
    float x1,x[10],y[10][10],a[10],s=0,dd;
    int n,i,j;
    printf("Enter number of observations:");
    scanf("%d",&n);
    printf("Enter values of X:\n");
    for(i=0;i<n;i++)
        scanf("%f",&x[i]);
    printf("Enter values of Y:\n");
    for(i=0;i<n;i++)
        scanf("%f",&y[i][0]);

        for(j=1;j<n;j++)
    {
        for(i=0;i<(n-j);i++)
            y[i][j]=(y[i+1][j-1]-y[i][j-1])/(x[i+j]-x[i]);
    }
    printf("\n");
    printf("Enter the value to be interpolated:\n");
    scanf("%f",&x1);
    a[0]=1;
    for(i=1;i<=n;i++)
    {
        a[i]=(x1-x[i-1])*a[i-1];

    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        s=s+a[i]*y[0][i];
    }
    printf("The result is:\n");
    dd=y[0][0]+s;
    printf("%f",dd);

}
