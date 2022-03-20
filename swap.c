#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node *next;
}*NODE;
NODE head;
NODE getnode();
NODE delete_end(NODE);
NODE insert_end(NODE);
NODE swap(NODE);
NODE display(NODE);
void main()
{
    int choice;
    while(1)
    {
        printf("OPERATIONS:\n1.Insert at End\n2.Delete at end\n3.Display\n4.Swap\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: head=insert_end(head);
                    break;
            case 2: head=delete_end(head);
                    break;
            case 3: display(head);
                    break;
            case 4: head=swap(head);
                    display(head);
                    break;
        }
    }

}
NODE getnode()
{
    int i,j;
    NODE newnode;
    newnode=(NODE)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Node not created\n");
        exit(0);
    }
    printf("Enter Data:\n");
    scanf("%d\n",&newnode->data);

    newnode->next=NULL;

    return newnode;
}
NODE insert_end(NODE head)
{
    NODE cur=head,newn=getnode();
    if(head==NULL)
    {
        return newn;
    }
    while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=newn;
        newn->next=NULL;
    return head;
}
NODE delete_end(NODE head)
{
    NODE cur=head;
    if(head=NULL)
    {
        printf("Linked list is empty\n");
        exit(0);
    }
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    free(cur);

    return head;
}
NODE display(NODE head)
{
 NODE temp=head;
 while(temp->next!=NULL)
 {
 printf("%d ",temp->data);
 temp=temp->next;
 }
}
NODE swap(NODE head)
{
    NODE temp1,temp2;
    temp1=head;
    temp2=head->next;
    while(temp2->next!=NULL)
    {
        temp1->next=temp2->next;
        temp2->next=temp1;
        head=temp2;
        temp1=temp1->next;
        temp2=temp1->next;
    }
    return head;
    }
