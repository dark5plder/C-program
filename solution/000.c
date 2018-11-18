#include<stdio.h>
    struct info
    {
        char name[30];
        int age;
        int contact;
    };
main()
{
    int i;
    struct info student[2];
    for(i=0;i<=1;i++)
    {
        printf("Enter value:\n");
        scanf("%s %d %d",student[i].name,&student[i].age,&student[i].contact);
    }
    //printf("%s %d %d",student1.name,student1.age,student1.contact);
    for(i=0;i<=1;i++)
    printf("%s %d %d \n",student[i].name,student[i].age,student[i].contact);
}

