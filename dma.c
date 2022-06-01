 #include<stdio.h>
struct bookdetails
{
    int cost;
    char name[10];
    char aname[15];
};
typedef struct bookdetails BOOKS;
void read(BOOKS *a,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("enter the cost of the book:");
        scanf("%d",&(a->cost));
        printf("enter the name of the book:");
        scanf("%s",&(a->name));
        printf("enter the author who wrote the book:");
        scanf("%s",&(a->aname));
        a=a+sizeof(BOOKS);
    }
}

void display(BOOKS *a,int n)
{
    for(int i=1;i<=n;i++)
    {
       printf("\ncost:%d\nname:%s\nauthor name:%s\n",a->cost,a->name,a->aname);
        a=a+sizeof(BOOKS);
    }
}
int max(BOOKS *a,int n)
{  int max=0;
     for(int i=1;i<=n;i++)
     {
         if((a->cost)>max) max=a->cost;
         a=a+sizeof(BOOKS);
     }
     return(max);
}
void costliest(BOOKS *a,int n,int x)
{
    for(int i=1;i<=n;i++)
    {
        if(x==a->cost)
        {
            printf("\nthe costliest book is:\ncost:%d\nname:%s\nauthor name:%s\n",a->cost,a->name,a->aname);
            exit(0);
        }
        a=a+sizeof(BOOKS);
    }
}

void main()
{
    int n,x;
    printf("enter the number of book:");
    scanf("%d",&n);
    BOOKS *a;
    a=(BOOKS*)calloc(n,sizeof(BOOKS));
    read(a,n);
   x=max(a,n);
    display(a,n);
    costliest(a,n,x);

}
