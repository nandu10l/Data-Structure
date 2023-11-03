#include<stdio.h>
int rear=-1,front=0,max_size,a[50],item;
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
 if(rear==max_size-1)
 {
printf("OVERFLOW\n");
  }
  else
  {
   rear=rear+1;
   printf("enter the number:");
   scanf("%d",&item);
   a[rear]=item;
   
  }
 }
void dequeue()
{
 if(rear<front)
 {
  printf("UNDERFLOW\n");
 }
 else if(front==rear)
 {
  front=0;
  rear=-1;
  
 }
 else
 {
  item=a[front];
  front++;
 }
 
 
}
void peek()
{
 if(rear<front)
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
 if(rear!=-1)
 {
  printf("The Elements in array: ");
  for(int i=front;i<=rear;i++)
  {
   printf("%d\t",a[i]);
  }
  printf("\n");
 }

 else
 {
  printf("UNDERFLOW\n");
 }
}

