#include <stdio.h>

void main()
{
int limit,i,j,temp,min_index,count=0;
printf("enter the no of elements:");
scanf("%d",&limit);
count++;
int a[limit];
printf("enter the no's:");
for(i=0;i<limit;i++){
count++;
scanf("%d",&a[i]);
count++;}
for(i=0;i<limit-1;i++){
count++;
min_index=i;
count++;

for(j=i+1;j<limit;j++){
count++;
if(a[j]<a[min_index]){
count++;
min_index=j;
count++;
}
}
temp=a[i];
count++;
a[i]=a[min_index];
count++;
a[min_index]=temp;
count++;}
printf("the sorted array is:");
for(i=0;i<limit;i++){
count++;
printf("%d ",a[i]);
count++;

}
count+=2;
printf("\nTime complexity =%d",count);
printf("\nSpace complexity=%d",(20+(4*limit)));
}




