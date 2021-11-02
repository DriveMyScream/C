#include <stdio.h>
int main() {
//  For integer Value
     int i = 10;
     int *j = &i;
     printf("The address of i is: %u \n", j);
     j++;
     printf("The address of j is: %u \n", j);

//  For Char Value
    char a = '@';
    char *b = &a;
    printf("The address of a is: %u \n", b);
    b++;
    printf("The address of a is: %u \n", b);

//  For float 
    float x = 3.14;
    float *y = &x;
    printf("The address of x is: %u \n", y);
    y++;
    printf("The address of x is: %u \n", y);
return 0;
}