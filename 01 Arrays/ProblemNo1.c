#include <stdio.h>
int main() {
      int arr[10];
      int *ptr = arr;
      ptr = ptr + 2;
      if(ptr==&arr[2]) {
          printf("The Array is At Same Location");
      } else {
          printf("The Array is At different Position");
      }
return 0;
} 