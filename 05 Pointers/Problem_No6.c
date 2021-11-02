#include <stdio.h>
int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    printf("The Value of a is: %d \n", a);
    printf("The Value of b is: %d \n", *b);
    printf("The Value of c is %d \n", **c);
return 0;
}