#include <stdio.h>
 int factorial(int a) {
     if(a==0 || a==1) {
         return 1;
     } else {
         return a * factorial(a-1);
     }
 }

 int fibonacci(int n) {
     if(n==1 || n==2) {
         return n-1;
     } else {
         return fibonacci(n-1) + fibonacci(n-2);
     }
 }

  int sum(int a) {
      if(a>0) {
          return 1;
      } else {
          return sum(a) + sum(a-1);
      }
  }

  int patterns(int n) {
      if(n>0) {
          patterns(n-1);
          for(int i=1; i<=n; i++) {
              printf("* ");
          }
          printf("\n");
      }
  }
int main() {
    // Problem No 1
    // int fact = factorial(5);
    // printf("The Factorial Of Num is: %d \n", fact);

    // Problem No 2
    // int fibo = fibonacci(5);
    // printf("The Element of Fibonacci series is: %d \n", fibo);

    // Problem No 3
    // int result = sum(5);
    // printf("The Sum Of Numbers is: %d \n", result);

    // Problem No 4
    int pat = patterns(6);
    printf(pat);
return 0;
}