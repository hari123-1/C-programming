
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
struct node *head=NULL,*newnode,*temp,*del;
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
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }
}
void insertfirst()
{
        printf("Enter data:");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=head;
        head=newnode;
}
void insertlast()
{
        printf("Enter data:");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode->prev=temp;
        temp->next=newnode;
}
void insertpos()
{
    int pos,i;
    printf("Enter the position:");
    scanf("%d",&pos);
     printf("Enter data:");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        temp=head;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next->prev=newnode;
        temp->next=newnode;
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
void deletefirst()
{
        /*del=head;
        del->next->prev=NULL;
        del->next=head;
        free(del);*/
}
int main()
{
    int choice;
    while(1)
    {
        printf("......**Linked list**......\n");
        printf("1-Create a node\n2-Insert at Beginning\n3-Display\n4-Insert at last\n5-Insert at position\n");

        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            createnode();
            break;
            case 2:
            insertfirst();
            break;
            case 3:
            display();
            break;
            case 4:
            insertlast();
            break;
            case 5:
            insertpos();
            break;
            case 6:
            deletefirst();
            break;
            default:
            printf("Wrong Choice\n");
        }
    }
}
