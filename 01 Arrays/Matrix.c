#include <stdio.h>
int main() {
   int rows = 3;
   int cols = 3;
   int mat1 [rows][cols];
   int mat2 [rows][cols];
   int mat3 [rows][cols];

   printf("Enter The Matrix Frist \n");
   for(int i=0; i<rows; i++) {
       for(int j=0; j<cols; j++) {
           printf("Enter The Number at %d and %d:  \n", i+1, j+1);
           scanf("%d", &mat1[i][j]);
       }
   }
   printf("Enter The Matrix Second \n");
   for(int i=0; i<rows; i++) {
       for(int j=0; j<cols; j++) {
           printf("Enter The Number at %d and %d \n", i+1, j+1);
           scanf("%d", &mat2[i][j]);
       }
   }
   for(int i=0; i<rows; i++) {
       for(int j=0; j<cols; j++) {
           mat3[i][j] = mat1[i][j] + mat2[i][j];
       }
   }

   printf("The Result of Matrix addition is: \n");
   for(int i=0; i<rows; i++) {
       for(int j=0; j<cols; j++) {
           printf("%d ", mat3[i][j]);
       }
       printf("\n");
   }
return 0;
}