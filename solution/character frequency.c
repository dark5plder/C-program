#include<stdio.h>
#include<string.h>
main()
{
    char st[100];
    int i,l,a[256];
    printf("Enter any line of text:");
    gets(st);
   for(i=0;i<256;i++)
        a[i]=0;
    l=strlen(st);
    for(i=0;i<l;i++)
        a[st[i]]++;
    for(i=0;i<256;i++)
        if(a[i]>0)
        printf("%c=%2d\t",i,a[i]);
}
