#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
 
struct node
{   int data;
    struct node* next;
};
 
struct node* first=NULL,*last=NULL;
 
void addNode(int value)
{
    struct node* n;
 
    if(first==NULL)
    {
            n=(struct node*)malloc(sizeof(struct node));
            n->data=value;
            n->next=NULL;
            first=last=n;
    }
 
    else
    {
            n=(struct node*)malloc(sizeof(struct node));
            n->data=value;
            n->next=NULL;
 
            last->next=n;
            last=n;
 
    }
 
}
 
void display(struct node* a)
{
    while(a!=NULL)
    {
        printf("%d ",a->data);
        a=a->next;
    }
}
 
int main()
{
    int choice;
    int key;
 
    do
    {
 
            
            printf("\n\n1 - Add\n2 - Display\n0 - Exit ");
            scanf("%d",&choice);
 
            switch(choice)
            {
              case 1: printf("\nEnter value to add ");
                      scanf("%d",&key);
                      addNode(key);
                      break;
 
              case 2: display(first);
 
            }
 
    }while(choice);
 

    return 0;
}