#include <stdio.h>
#include <stdlib.h>
 typedef struct X
{
    int n;
    struct X *next;
}  *node;
node insert(node head);
node ls(node head);
void display(node head);
int main()
{

    node head=NULL;
    int choice;

while(1)
{
    printf("enter choice\n 1-insert 2-left shift by k nodes 3-display  4-exit\n");
    scanf("%d",&choice);
    switch(choice)
    {

    case 1 :
              head = insert(head);
              break;
    case 2:
              head=ls(head);
              break;
    case 3:
              display(head);
              break;
    case 4:
              exit(0);
              break;
    default:
        printf("invalid option");
}
}
return 0;
}
node getnode()
{
    node new1;
    new1=(node) malloc ( sizeof (struct X) );
    if(new1==NULL)
    {
          printf("list is empty ");
          printf(" enter the  data: \n ");
          scanf("%d",&new1->n);
          return new1;
    }
        else
    {
    new1->next=NULL;
    printf(" enter the data:\n ");
     scanf("%d",&new1->n);
    return new1;
    }
}
node insert(node head)
{
    node cur=head;
    node new1=getnode();
    if (head==NULL)
        return new1;
        while(cur->next!=NULL)
          cur=cur->next;
        cur->next=new1;
        new1->next=NULL;
        return head;
}

node ls(node head)
{
    node cur=head;
    int k;
    printf("enter value of k\n");
    scanf("%d",&k);
    while(cur->next!=NULL)
        cur=cur->next;
        cur->next=head;
        cur=head;
    for (int i=0;i<k-1;i++)
        cur=cur->next;
    node prev=cur;
    cur=cur->next;
    head=cur;
    prev->next=NULL;
    return head;
}
void display(node head)
{
    node cur;
    if(head==NULL)
    printf("list is empty\n");
    else
    {
        cur=head;
        printf("your data in the list is:\n ");
        while(cur!=NULL)
        {
            printf("%d \n",cur->n);
            cur=cur->next;
        }
    }
}
