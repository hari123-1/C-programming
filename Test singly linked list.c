#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*temp,*prev;
void createnode()
{
    int n,i;
    printf("Enter the no of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter data:");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void lasttofirst()
{
    temp=head->next;
    prev=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        prev=prev->next;
    }
    temp->next=head;
    prev->next=NULL;
    head=temp;
}
void deletealternative()
{
   prev=head;
   temp=prev->next;
   while(prev!=NULL && temp!=NULL)
   {
       prev->next=temp->next;
       free(temp);
       prev=prev->next;
       temp=prev->next;
   }
   printf("Succesfully alternative nodes are deleted\n\n");
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("Data:%d \n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("......**Linked list**......\n");
        printf("1-Create a node\n2-Last to First\n3-Display\n4-deletealternative\n");

        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            createnode();
            break;
        case 2:
            lasttofirst();
            break;
        case 3:
             display();
             break;
        case 4:
            deletealternative();
            break;
        default:
            printf("Wrong Choice");
        }
    }
}
