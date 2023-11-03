#include<stdio.h>
int rear=-1,front=-1,max_size,a[50],item;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
 int  choice;
 printf("enter the limit:");
 scanf("%d",&max_size);
 while(choice!=5)
 {
  printf("Enter the operation to perform:\n 1.ENQUEUE 2.DEQUEUE 3.PEEK 4.DISPLAY 5.EXIT\n choice:");
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
     default:
     {
      printf("INVALID CHOICE");
     }
   }
 }
}
void enqueue()
{
 if(front==-1&&rear==-1)
 {
  front=0;
  rear=0;
  printf("Enter the item:");
  scanf("%d",&item);
  a[rear]=item;
  }
  else if(front==(rear+1)%max_size)
  {
   printf("OVERFLOW\n");
  }
  else
  {
   rear=(rear+1)%max_size;
   printf("enter the number:");
   scanf("%d",&item);
   a[rear]=item;
   
  }
 }
void dequeue()
{
 if(front==-1&&rear==-1)
 {
  printf("UNDERFLOW\n");
 }
 else if(rear==front)
 {
  item=a[front];
  rear=-1;
  front=-1;
  
 }
 else
 {
  item=a[front];
  front=(front+1)%max_size;
 }
}
void peek()
{
 if(front==-1&&rear==-1)
 {
  printf("UNDERFLOW\n");
 }
 else
 {
  printf("FRONT ELEMENT=%d\n",a[front]);
 }
}
void display()
{
int i;
 if(front==-1)
 {
  printf("UNDERFLOW\n");
 }
 else
 {
 
  printf("The elements in queue :\n");
  printf("Position | Element\n");
  for(i=front;i!=rear;i=(i+1)%max_size)
  {
   printf("  %d           ",i);
   printf("%d \n",a[i]);
  } 
   printf("  %d           ",rear);
   printf("%d \n",a[i]);
    printf("Position of front:%d\n",front);
    printf("\n");
   printf("Position of rear:%d",rear);
   printf("\n");
 }
}




