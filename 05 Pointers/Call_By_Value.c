#include <stdio.h>
int sum(int a, int b) {
    int sum = a + b;
    return sum;
    }
int main() {
    int s = sum(5, 10);
    printf("The Sum of Two Numbers is: %d \n", s);
return 0;
}