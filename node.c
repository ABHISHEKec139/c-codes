
#include <stdio.h>

#include <stdlib.h>



struct node

{

    int data;

    struct node *next;

}*head;





void SLLcreateNode(int n);

void SLLinsertNodeAtBeginning(int data);

void SLLdisplayList();





int main()

{

    int n, data;

    printf("Enter the total number of nodes: ");

    scanf("%d", &n);

    SLLcreateNode(n);



    printf("\nData in the list \n");

    SLLdisplayList();

    printf("\nEnter data to insert at beginning of the list: ");

    scanf("%d", &data);

    SLLinsertNodeAtBeginning(data);



    printf("\nData in the list \n");

    SLLdisplayList();



    return 0;

}



void SLLcreateNode(int n)

{

    struct node *newNode, *temp;

    int data, i;



    head = (struct node *)malloc(sizeof(struct node));



    if(head == NULL)

    {

        printf("Unable to allocate memory.");

    }

    else

    {



        printf("Enter the data of node 1: ");

        scanf("%d", &data);



        head->data = data; // Link data field with data

        head->next = NULL; // Link address field to NULL



        temp = head;

        for(i=2; i<=n; i++)

        {

            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == NULL)

            {

                printf("Unable to allocate memory.");

                break;

            }

            else

            {

                printf("Enter the data of node %d: ", i);

                scanf("%d", &data);



                newNode->data = data;

                newNode->next = NULL;



                temp->next = newNode;



                temp = temp->next;

            }

        }



        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");

    }

}



void SLLinsertNodeAtBeginning(int data)

{

    struct node *newNode;



    newNode = (struct node*)malloc(sizeof(struct node));



    if(newNode == NULL)

    {

        printf("Unable to allocate memory.");

    }

    else

    {

        newNode->data = data;

        newNode->next = head;



        head = newNode;



        printf("DATA INSERTED SUCCESSFULLY\n");

    }

}



void SLLdisplayList()

{

    struct node *temp;

    if(head == NULL)

    {

        printf("List is empty.");

    }

    else

    {

        temp = head;

        while(temp != NULL)

        {

            printf("Data = %d\n", temp->data);

            temp = temp->next;

        }

    }

}
