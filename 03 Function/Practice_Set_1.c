#include <stdio.h>
  int sum(int a, int b, int c) {
      int sum1 = a + b + c;
      int avg = sum1 / 3;
  }

  int fahrenheit(int a) {
      int celsius = (a - 32) * 5 / 9;
      return celsius;
  }

  int fibonacci(int n) {
      if(n==1 || n==2) {
          return n-1;
      } else {
          return fibonacci(n-1) + fibonacci(n-2);
      }
  }
int main() {
//    Problem No 1
    //   int result = sum(10, 20, 30);
    //   printf("The Average Of Three Numbers is: %d \n", result);

//    Problem No 2
    //   int celsius = fahrenheit(40);
    //   printf("The Temperature in Fahrenheit is: %d \n", celsius);

//    Problem No 3
         int fibo = fibonacci(10);
         printf("The Element at Index is: %d \n", fibo);
return 0;
}