#include<stdio.h>
typedef struct songs
{
    char sname[10];                         //data part of the node
    int sid;
    char sinname[15];
    char lan[10];
    struct nodes *ptr;                      //link of next node
}*NODE;                                     //typedeffed to *NODE

NODE Create();
NODE EnqueueASong(NODE head);
NODE DequeueASong(NODE head);
NODE DisplayLastSong(NODE head);
NODE DisplayNextSong(NODE head);
NODE DisplayPresentSong(NODE head);
void displayAudioPlayList(NODE head);

void main()
{
    NODE head=NULL;
}

NODE Create()
{
    NODE temp,i=0;
    temp=(NODE)malloc(sizeof(struct songs));

    printf("Enter the song name:");
    scanf("%s",&(temp->sname));
    printf("Enter the singer name:");
    scanf("%s",&(temp->sinname));
    printf("Enter the language:");
    scanf("%s",&(temp->lan));

    temp->sid=i+1;
    temp->ptr=NULL;
    return(temp);
}

NODE EnqueueASong(NODE head)
{
    NODE temp,temp1=head;
    temp=Create();
    if(head==NULL) head=temp;
    else
    {
        while(temp1->ptr!=NULL)
             temp1=temp1->ptr;

        temp1->ptr=temp;
        temp->ptr=NULL;
    }
    return(head);
}

NODE DequeueASong(NODE head)
{
    NODE temp,temp1=head,temp2=head,x;
    printf("Enter the song name:");
    scanf("%s",&(x->sname));

    if(head==NULL) printf("The playlist is empty");
    else
    {
        while(temp->sname==x->sname)
            temp=temp->ptr;

        if(temp==head) { head=NULL; free(temp); }
        else
        {
            while(temp1->ptr!=temp)
            temp1=temp1->ptr;

        if(temp->ptr==NULL) { temp1->ptr=NULL; }
        else { temp2=temp1->ptr; }
    }
}
}

