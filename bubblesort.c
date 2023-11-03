#include <stdio.h>
void main()
{
int limit,i,j,temp,count=0;
count++;
printf("enter the no of elements:");
scanf("%d",&limit);
count++;
int a[limit];
printf("enter the no's:");
for(i=0;i<limit;i++){
count++;
scanf("%d",&a[i]);
count++;}
for(i=0;i<limit;i++){
count++;
for(j=i+1;j<limit;j++){
count++;
if(a[i]>a[j]){
count++;
  temp=a[i];count++;
  a[i]=a[j];count++;
  a[j]=temp;count++;
}}}
printf("the sorted array:");
for(i=0;i<limit;i++){
count++;
printf("%d ",a[i]);
count++;
}
count+=2;
printf("\n Time complexity=%d",count);
printf("\n Space complexity=%d",20+(4*limit));

}
