#include <stdio.h>
int main() {
   int marks [5];
   int *pt = &marks[0];
   for(int i=0; i<5; i++) {
       printf("Enter The Marks of Subject %d: ", i+1);
       scanf("%d", pt);
       pt++;
   }
   for(int i=0; i<5; i++) {
       printf("The Marks of Student is: %d \n", marks[i]);

   }
return 0;
}