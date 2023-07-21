#include<stdio.h>
#include<stdlib.h>
struct node1
{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*newnode,*newnode1;
int main()
{
    int i,n;
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node*));
    for(i=0;i<n;i++)
    {
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
    newnode1=(struct node*)malloc(sizeof(struct node*));
    for(i=0;i<n;i++)
    {
        printf("Enter the data:");
        scanf("%d",&newnode1->data);
        newnode1->next=NULL;
        if(head==NULL)
        {
            head=newnode1;
            temp=newnode1;
        }
        else{
            temp->next=newnode1;
            temp=newnode1;
        }
    }
}
