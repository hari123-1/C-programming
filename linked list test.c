#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode;
void createnode()
{
    int n,i;
    printf("Enter the no of inputs:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node*));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void count()
{
    int c=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
     printf("count is %d\n",c);
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insertend()
{
     newnode=(struct node*)malloc(sizeof(struct node*));
     printf("Enter the data:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            temp=temp->next;
        }
        else
        {
            temp->next=newnode;
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf(".....**Linked List**.....\n");
        printf("1-create node\n2-count nodes\n3-display\n4-Insert at end\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            createnode();
            break;
        case 2:
            count();
            break;
        case 3:
            display();
            break;
        case 4:
            insertend();
            break;
        default:
            printf("Wrong choice\n");
        }
    }
}
