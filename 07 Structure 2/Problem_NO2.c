#include <stdio.h>

 struct vector {
     int x;
     int y;
 };
 void sum(struct vector vec) {
     int result = vec.x + vec.y;
     printf("The addition of two numbers is: %d \n", result);
 }
int main() {
   struct vector v1;
   printf("Enter a x-dimension: ");
   scanf("%d", &v1.x);
   printf("Enter a y-dimension: ");
   scanf("%d", &v1.y);

   sum(v1);
return 0;
}