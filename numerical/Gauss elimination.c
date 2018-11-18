#include<stdio.h>
main()
{
    float a[10][10],b[10],temp;
    int i,j,m,n;
    printf("Enter row & column number as x,y:\n");
    scanf("%d %d",&m,&n);
    printf("Enter matrix:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    //DIVIDING STARTS HERE
    for(j=1;j<=n;j++)
    {
        for(i=j;i<=1;i++)
        {   temp=a[i][j];
            for(j=1;j<=n;j++)
            {
                a[i][j]=a[i][j]/temp;
            }

        }
    }


    //Printing
        for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%f ",a[i][j]);
        }printf("\n");
    }


}
