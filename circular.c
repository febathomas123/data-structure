#include<stdio.h>
#include<stdlib.h>
void enqueue(int);
void dequeue();
void display();
int ch,value;
struct node
{
 int data;
 struct node *next;
 }*front=NULL,*rear=NULL;
 void main()
{
  while(ch!=4)
  {
   printf("\n 1. ENQUEUE \n 2. DEQUEUE \n 3. DISPLAY");
   printf("\n enter your choice= ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
       printf("\n Enter the value to insert = ");
       scanf("%d",&value);
       enqueue(value);
       break;
    case 2:
        dequeue();
        printf("after deletion the resulted queue is= \n");
        display();
        break;
    case 3:
        display();
        break;
    default:
        printf("Enter the right choice.....!!!!!!");
        break;


   }

   }
}
void enqueue( int value)
{
    struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = value;
	n->next = NULL;
	if((rear==NULL)&&(front==NULL))
	{
		front = rear = n;
		rear->next = front;
	}
	else
	{
		rear->next = n;
		rear = n;
		n->next = front;
	}
}
void dequeue()
{
	struct node* t;
	t = front;
	if((front==NULL)&&(rear==NULL))
		printf("\nQueue is Empty");
	else if(front == rear){
		front = rear = NULL;
		free(t);
	}
	else{
		front = front->next;
		rear->next = front;
		free(t);
	}
	}
void display()
{
	struct node* t;
	t = front;
	if((front==NULL)&&(rear==NULL))
		printf("\nQueue is Empty");
	else{
		do{
			printf("\n%d",t->data);
			t = t->next;
		}while(t != front);
	}
}
