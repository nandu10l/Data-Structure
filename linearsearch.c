#include<stdio.h>
void main()
{
int i,lim,x,flag=0,count=0;
count+=2;
printf("Enter the no of elements:");
scanf("%d",&lim);
count++;
int a[lim];
count++;
printf("Enter the no.s:");
for(i=0;i<lim;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
printf("Enter a no :");
scanf("%d",&x);
count++;
for(i=0;i<lim;i++)
{
count++;
if (a[i]==x)
{
count++;
 flag++;
 count++;
 printf("position of %d=%d\n",x,i);
 count++;
}
}
if (flag>0)
{
count++;
printf("%d is present\n",x);
count++;
}
else
{
count++;
printf("%d is not present\n",x);
count++;
}
count+=2;
printf("Time complexity=%d\n",count);
printf("Space complexity=%d\n",20+(4*lim));
}
