#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
int ch,value;
struct node
{
    int data;
    struct node*next;
}*top=NULL;

 void main()
{

  while(ch!=4)
    {
        printf("\n 1.PUSH \n  2.POP \n 3.DISPLAY");
        printf("\n ENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n ENTER VALUE TO INSERET:");
                   scanf("%d",&value);
                   push(value);
                   display();
                   break;
            case 2:pop();
                   display();
                   break;
            case 3:display();
                   break;


            default:printf("\ENTER  RIGHT CHOICE:");
                    break;
        }
    }

}
void push(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(top==NULL)
    {
        top=newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
}
 void pop()
 {
     struct node *temp;
     if(top==NULL)
        printf("\n EMPTY STACK");
     else
        {
           temp=top;
           top=temp->next;
           free(temp);
        }
 }
void display()
{
    if(top==NULL)
    {
        printf("\n EMPTY STACK");
    }
    else
    {
        struct node *temp;
        temp=top;
        while(temp->next !=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->next;
        }
        printf("%d-->null",temp->data);
    }
}
