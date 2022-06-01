
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
void DisplayLastSong(NODE head);
void DisplayNextSong(NODE head,NODE present);
void DisplayAudioPlayList(NODE head);
void Play(NODE head,NODE present);
NODE Playnext(NODE head,NODE present);

void main()
{
    NODE head=NULL,present;
     int ch;
    while(1)
    {
        printf("\n\nEnter your choice:");
        printf("\n1.Enqueue a song");
        printf("\n2.Dequeue a song");
        printf("\n3.Display the next song");
        printf("\n4.Display the last song");
        printf("\n5.Display the whole list");
        printf("\n6.Play the song");
        printf("\n7.Play the next song");
        printf("\n0.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: head=EnqueueASong(head);  break;
            case 2: head=DequeueASong(head); break;
            case 3: DisplayNextSong(head,present); break;
            case 4: DisplayLastSong(head); break;
            case 5: DisplayAudioPlayList(head); break;
            case 6: Play(head,present); break;
            case 7: present=Playnext(head,present); break;
            case 0: exit(0); break;
            default: printf("\n invalid choice\n");
        }
    }

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
           else { temp2=temp->ptr; temp1->ptr=temp2; }
           free(temp);
        }
   }
   return(head);
}

void DisplayLastSong(NODE head)
{
    NODE temp=head;
    while(temp->ptr!=NULL)
        temp=temp->ptr;
    printf("\nSong name:%s\nSinger name:%s\nLanguage:%s\nSong ID:%d",temp->sname,temp->sinname,temp->lan,temp->sid);
}

void DisplayNextSong(NODE head,NODE present)
{
    NODE temp=head;
       while(temp!=present)
        temp=temp->ptr;
       temp=temp->ptr;
    printf("\nSong name:%s\nSinger name:%s\nLanguage:%s\nSong ID:%d",temp->sname,temp->sinname,temp->lan,temp->sid);

}

void DisplayAudioPlayList(NODE head)                     //display whole list
{
        NODE temp=head;
    while(temp->ptr!=NULL)
    {
      temp=temp->ptr;
    printf("\nSong name:%s\nSinger name:%s\nLanguage:%s\nSong ID:%d",temp->sname,temp->sinname,temp->lan,temp->sid);
    }
}

void Play(NODE present)
{
    printf("%s........",present->sname);
}
NODE Playnext(NODE head,NODE present)
{
    present=present->ptr;
    printf("%s........",present->sname);
    return(present);
}
