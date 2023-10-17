#include<stdio.h>
int rear=-1,front=0,item,a[50],max_size;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
  int choice;
  printf("Enter the limit:");
  scanf("%d",&max_size);
  while(choice!=5)
  {
  printf("Enter the choice \n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\nChoice:");
  scanf("%d",&choice);
  switch(choice)
     {
      case 1:
          {
           enqueue();
           break;
          }
      case 2:
          {
           dequeue();
           break;
          }
      case 3:
          {
           peek();
           break;
          }
      case 4:
          {
           display();
           break;
          }
     }
}
}
void enqueue()
   {
    if(rear==max_size-1)
      {
        printf("OverFlow!\n");
      }
    else
      {
       rear=rear+1;
       printf("Enter the number:");
       scanf("%d",&item);
       a[rear]=item;
      }
     }
void dequeue()
  {
    if(rear<front)
     {
       printf("UnderFlow!\n");
     }
     else
     {
       item=a[front];
       printf("The value %d is dequeued\n",a[front]);
       front++;
     }
   }
void peek()
   {
     if(rear<front)
     printf("The queue is empty\n");
     else
     printf("Front element=%d",a[front]);
     printf("\n");
   }
void display()
   {
     if(rear!=-1)
      {
        printf("The elements in queue:");
        for(int i=front;i<=rear;i++)
        {
         printf("%d ",a[i]);
        }
        printf("\n");
      }
    else
        printf("UnderFlow!\n");
  } 
