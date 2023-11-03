#include<stdio.h>
int top=-1,max_size,a[50],item;
void push();
void pop();
void peek();
void display();
void main()
{
 int  choice;
 printf("enter the limit:");
 scanf("%d",&max_size);
 while(choice!=5)
 {
  printf("Enter the operation to perform:\n 1.PUSH 2.POP 3.PEEK 4.DISPLAY 5.EXIT\n choice:");
  scanf("%d",&choice);
  switch(choice)
  {
     case 1:
     {
      push();
      break;
      
     }
     case 2:
     {
      pop();
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
void push()
{
 if(top<max_size-1)
   {
    top=top+1;
    printf("enter the number:");
    scanf("%d",&item);
    a[top]=item;
   }
 else 
   {
      printf("OVERFLOW\n"); 
   }  
}
void pop()
{
 if(top==-1)
 {
  printf("UNDERFLOW\n");
 }
 else
 {
   item=a[top];
   top=top-1;
   
 }
}
void peek()
{
 if(top!=-1) 
  {
   printf("\nTOPMOST ELEMENT=%d\n",a[top]);
  }
 else
  {  
   printf("UNDERFLOW\n");
  }  
}
void display()
{
 if(top!=-1) 
  {
   printf("the elements are:\n");
   for(int i=0;i<=top;i++)
    {
     printf("%d\n",a[i]);
    }
  }
  else
  {
   printf("\nUNDERFLOW\n");
  }
  printf("\n");
}


