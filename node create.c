
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

 struct node *newNode, *temp;
}*head;

    int data, i;



    head= (struct node *)malloc(sizeof(struct node));



    if(head == NULL)

    {

        printf("Unable to allocate memory.");

    }

    else

    {



        printf("Enter the data of node 1: ");

        scanf("%d", &data);



        head->data = data;

        head->next = NULL;



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


