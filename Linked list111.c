#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *head=NULL;
void insertfirst(){
    struct node *New=(struct node*)malloc(sizeof(struct node));
    int element;
    scanf("%d",&element);
    New->value=element;
    New->next=NULL;
    New->next=head;
    head=New;
}
void insertafter()
{
     struct node *New=(struct node*)malloc(sizeof(struct node));
     New->value=element;
     New->next=NULL;
     struct node *prev=head;
     while(prev->value!=num)
     {
         prev=prev->next;
     }
     New->next=prev->next;
     prev->New=
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);
            tmp = tmp->nextptr;
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("Enter the choice\n");
        printf("1-Insert the value\n");
        printf("2-Display\n");
        printf("3-Delete the value\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the value:\n");
            insertfirst();
            break;
        case 2:
            printf("The values in the list are:\n\n");
            insertlast();
            break;
        case 3:
            deletefromfirst();
            break;
        default:
            printf("Wrong choice\n\n");
            break;
        }
    }
    return 0;
}
