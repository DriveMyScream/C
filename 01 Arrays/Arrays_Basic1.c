#include <stdio.h>
int main() {
   int marks [5];
   printf("Enter The Marks of Subject 1: ");
   scanf("%d", &marks[0]);
   printf("Enter The Marks of Subject 2: ");
   scanf("%d", &marks[1]);
   printf("Enter The marks of Subject 3: ");
   scanf("%d", &marks[2]);
   printf("Enter The Marks of Subject 4: ");
   scanf("%d", &marks[3]);
   printf("Enter The Marks of Subject 5: ");
   scanf("%d", &marks[4]);

   for(int i=0; i<5; i++) {
       printf("%d ", marks[i]);
   }
return 0;
}