#include <stdio.h>
int main() {
   int a [] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   int n = 10;
   int l = n / 2;
   for(int i=0; i<l; i++) {
       int temp = a[i];
       a[i] = a[n-i-1];
       a[n-i-1] = temp;
   }
   for(int i=0; i<n; i++) {
       printf("%d ", a[i]);
   }
return 0;
}