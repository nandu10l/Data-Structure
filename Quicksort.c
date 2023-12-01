// quick sort 
#include<stdio.h>
void Quick_sort(int ar[],int limit,int low,int high);
void main(){
	int limit,i;
        printf("Enter the number of elements:");
        scanf("%d",&limit);
        int ar[limit];
        printf("Enter the elements:");
        for(i=0;i<limit;i++){
      		scanf("%d",&ar[i]);
        }
	printf("The array before  Quick sorting is :   ");
        for(i=0;i<limit;i++){
      		printf("%d\t",ar[i]);
      		
        }
        printf("\n");
        int low=0;
        int high=limit-1;
        Quick_sort( ar, limit, low, high);
        printf("The array after  Quick sorting is  :   ");
        for(i=0;i<limit;i++){
      		printf("%d\t",ar[i]);
        }
        
     printf("\n");
}
void Quick_sort(int array[],int limit,int low,int high){
	int i=low,j=high,temp,pivot;
	pivot=j;
	if(i<j){
		while(i<j){
			while(array[i]<array[pivot]){
				i++;
			}
			while(array[j]>array[pivot]){
				j--;
			}
			if(i<j){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
		temp=array[pivot];
		array[pivot]=array[j];
		array[j]=temp;
		Quick_sort(array,limit,low,j-1);
		Quick_sort(array,limit,j+1,high);
	 	
	}
}
