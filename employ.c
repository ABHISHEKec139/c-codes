
#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int id;
    char name[50];
};
void main()
{



    int i,n;
    struct emp *e;
    printf("enter the number of employee\n");
    scanf("%d",&n);
    e=(struct emp*)malloc(n*sizeof(struct emp));
    if(e=NULL)
    {
        printf("error");
    }
    printf("enter employee details\n");
    for(i=0;i<n;i++)
    {
        printf("enter employee id\n");
        scanf("%d",&(e+i)->id);
        printf("enter employee name\n");
        scanf("%s",&(e+i)->name);
    }
    printf("displaying info");
    for(i=0;i<n;i++)
    {
        printf("%d\n",(e+i)->id);
        printf("%s\n",(e+i)->name);
    }
    free(e);
}
