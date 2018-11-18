#include<stdio.h>

int main()
{
   int n, a = 0, b = 1, c, d;

   printf("Enter the number of terms:\n");
   scanf("%d",&n);

   printf("First %d terms of Fibonacci series are :-\n",n);

   for ( d = 0 ; d < n ; d++ )
   {
      if ( d <= 1 )
         c = d;
      else
      {
         c = a + b;
         a = b;
         b = c;
      }
      printf("%d\n",c);
   }

   return 0;
}
