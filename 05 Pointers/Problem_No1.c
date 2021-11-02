#include <stdio.h>
int main() {
    int a = 10;
    int *b = &a;
    printf("The Value of a is: %d \n", a);
    printf("The Value of b is %d \n", *b);
    printf("The address of variable a is: %u \n", &a);
    printf("The address of variable b is: %u \n", &b);
return 0;
}