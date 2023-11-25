#include<stdio.h>

void main(){
     int n,i,position;
     printf("Enter the no. of nodes:");
     scanf("%d",&n);
     int T[n];
     printf("enter the elements: ");
     for(i=1;i<=n;i++){
          scanf("%d",&T[i]);
     
     }
      printf("The elements are: ");
     for(i=1;i<=n;i++){
          printf("%d\t",T[i]);
          
     }
     
     
    
     printf("\n");
     printf("Position of node: ");
     for(i=1;i<=n;i++){
          printf("%d\t",i);
     }
     printf("\n");
     printf("Enter the position of node:");
     scanf("%d",&position);
     if(position==0){
          printf("Invalid position");
          }
     else{
     if(position/2==0)
          printf("No parent \n");

     else
          printf("parent of %d is %d\n",T[position],T[position/2]);
 
     if(2*position>n)
          printf("No left child\n");

     else 
          printf("Left child of %d is %d\n",T[position],T[2*position]);
     
     if(2*position+1>n)
          printf("No Right child\n");

     else 
          printf("Right child of %d is %d\n",T[position],T[2*position+1]);

    }
    
    
 printf("\n");
 
}



