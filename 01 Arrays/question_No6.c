#include <stdio.h>
int main() {
    int a [] = {10, -4, 6, 2, -9, -1, 5, 3, 7};
    int n = 9;
    int count = 0;
    for(int i=0; i<n; i++) {
        if(a[i] > 0) {
            count = count + 1; 
        }
    }
    printf("The Count of Element is: %d", count);
return 0;
}