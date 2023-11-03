#include<stdio.h>


int main(){
 printf("Enter the limit: ");
 int limit;
scanf("%d",&limit);
 struct poly{
 int exp;
 int coef;
 }a[limit];

for (int i = 0; i < limit;i ++){
 printf("Enter the exponent: ");
 scanf("%d",&a[i].exp);
 printf("Enter coefficent : ");
 scanf("%d",&a[i].coef);
 }
int plus = limit - 1;
for(int i = 0; i< limit;i++){
	
 printf("%d",a[i].coef); 
 printf("X^");
 printf("%d",a[i].exp);
 if (plus>0){
  printf("+");
  }
  plus--;

}

}


