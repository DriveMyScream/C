#include <stdio.h>
int main() {
   int table[10];
   for(int i=0; i<10; i++) {
       table[i] = 5 * (i+1);
   }
   printf("The Table of 5 is: ");
   for(int i=0; i<=10; i++) {
       printf("%d ", table[i]);
   }
return 0;
}