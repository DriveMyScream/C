#include <stdio.h>
int value(int *a) {
    int modi = *a * 10;
    return modi;
}
int main() {
   int a = 10;
   int *b = &a;
   printf("The Value of a is: %d \n", a);
   int v = value(&a);
   printf("The Modified value of a is: %d \n", v);

return 0;
}