#include<stdio.h>
int main(){

 int rows,cols;
 printf("Enter the no of rows: ");
 scanf("%d",&rows);
 printf("Enter the no of columns: ");
 scanf("%d",&cols);
 int sparceMatrix[rows][cols];
 printf("Enter the elements for spacre matrix:");
 for (int i = 0; i<rows; i++){
  for (int j = 0; j<cols; j++){
   scanf("%d",&sparceMatrix[i][j]);
   }
  }
 printf("The sparce matrix is\n");
	
 for (int i = 0; i<rows; i++){
  for (int j = 0; j<cols; j++){
   printf("%d",sparceMatrix[i][j]);
   printf("\t");
   }
   printf("\n");
  }
 int nonCount = 0,tRow=1,tCol=3;
 for (int i = 0; i<rows; i++){
  for (int j = 0; j<cols; j++){
   if (sparceMatrix[i][j] != 0) {
   nonCount++;
   tRow++;
   }
   }
  }
 int k=1,tupleMatrix[tRow][tCol];
 tupleMatrix[0][0] = rows;
 tupleMatrix[0][1] = cols;
 tupleMatrix[0][2] = nonCount;
	
 for (int i = 0; i<rows; i++){
  for (int j = 0; j<cols; j++){
   if (sparceMatrix[i][j] != 0) {
    tupleMatrix[k][0] = i;
    tupleMatrix[k][1] = j;
    tupleMatrix[k][2] = sparceMatrix[i][j];
    k++;
   }
   }
  }
 printf("The Tuple matrix is\n");
	
 for (int i = 0; i<tRow; i++){
  for (int j = 0; j<tCol; j++){
   printf("%d",tupleMatrix[i][j]);
   printf("\t");
   }
   printf("\n");
  }
	

	
}
