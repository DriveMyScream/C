#include <stdio.h>
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 10;
    int b = 20;
    printf("The Value of a is %d and b is %d \n", a, b);
    swap(a, b);
    printf("The Value of a is %d and b is %d \n", a, b);
return 0;
}