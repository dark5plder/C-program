#include<stdio.h>
#include<math.h>
main()
{
    int i,n,z;
    float value[100],deviation,sum,sumsqr,mean,variance,stddeviation;
    sum=sumsqr=n=0;
    printf("Input array size:");
    scanf("%d",&z);
    printf("Input values:");
    for(i=1;i<=z;i++)
    {
        scanf("%f",&value[i]);
        if(value[i]==-1)
            break;
        sum=sum+value[i];
    }
    mean=sum/(float)z;
   for(i=1;i<=z;i++)
   {
       deviation=value[i]-mean;
       sumsqr=sumsqr+deviation*deviation;
   }
   variance=sumsqr/(float)z;
   stddeviation=sqrt(variance);
   printf("\nNumber of items: %d",z);
   printf("\nMean: %f",mean);
   printf("\nStandard deviation: %f",stddeviation);

}
