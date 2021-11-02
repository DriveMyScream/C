#include <stdio.h>
int sum(int a, int b) {
    int sum = a + b;
    return sum;
}

int area(int side) {
    int area = side * side;
    return area;
}
int main() {
//  Problem No 1
    // int result = sum(10, 30);
    // printf("The Sum Of Two Numbers is: %d \n", result);

//  Problem No 2
    int a = area(5);
    printf("The Area Of Square is: %d \n", a);
return 0;
}