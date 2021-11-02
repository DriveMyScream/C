#include <stdio.h>
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 5;
    int b = 10;
    swap(a, b);
    printf("The Swaping of %d and %d Numbers \n", a, b);
return 0;
}