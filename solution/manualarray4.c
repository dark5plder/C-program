#include<stdio.h>
main()
{
    int m,n,a1[100][100],a2[100][100],sum[100][100],r1,r2,c1,c2,i,j;
    printf("Enter Row and Column number of first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter Row and Column number of second matrix:");
    scanf("%d %d",&r2,&c2);
    if(r1==r2 && c1==c2)
            {
        printf("Enter elements of first matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            scanf("%d",&a1[i][j]);
        }
        printf("Enter elements of second matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                scanf("%d",&a2[i][j]);

        }
         for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            sum[i][j]=a1[i][j]+a2[i][j];
        }
        printf("Result:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d ",sum[i][j]);
                printf("\n");
        }

    }

    else

            printf("Matrix addition is not possible!");


}
