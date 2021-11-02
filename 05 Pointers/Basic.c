#include <stdio.h>
int main() {
   int a = 10;
   int *b = &a;
   int **c = &b;
   printf("The Value of a is: %d \n", a);
   printf("The Value of b is: %d \n", *b);
   printf("The value of c is: %d \n", **c);
   printf("The address Of a is: %u \n", &a);
   printf("The address of b is: %u \n", &b);
   printf("The address of c is: %u \n", &c);



return 0;
}