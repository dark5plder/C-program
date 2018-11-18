#include<stdio.h>
main()
{
    int k=0,i;
    for(i=0;i<10;i++)
   {
            k++;
            if(i<5) continue;
            k++;
            if(i>8)
                break;
            break;
   }
   printf("%d",k);

}
