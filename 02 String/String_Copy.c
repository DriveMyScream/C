#include <stdio.h>
#include <string.h>
int main() {
    char name [] = "Shubham";
    char fullName [30];
    strcpy(fullName, name);
    printf("The Full Name is: %s", fullName);
return 0;
}