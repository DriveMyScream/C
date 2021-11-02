#include <stdio.h>
  void math(int *a, int *b, int *c) {
      int sum = *a + *b + *c;
      printf("The Sum of Three Numbers is: %d \n", sum);
      int avg = sum / 3;
      printf("The Average of Three Numbers is: %d \n", avg);
  }
int main() {
   int a = 10;
   int b = 20;
   int c = 30;
   math(&a, &b, &c);
return 0;
}