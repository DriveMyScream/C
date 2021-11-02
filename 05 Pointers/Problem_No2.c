#include <stdio.h>
  int fun(int *a) {
      return *a;
  }
int main() {
   int a = 5;
   int *b = &a;
   printf("The address of a is %u \n", &a);
   fun(&a);
   printf("The Value of a is %u \n", &a);
return 0; 
}