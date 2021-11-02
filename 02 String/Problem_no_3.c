#include <stdio.h>
 int strlen(char *name) {
     char *ptr = name;
     int len = 0;
     while(*ptr != '\0') {
         len++;
         ptr++;
     } 
     return len;
 }
int main() {
    char name [] = "Shubham";
    int l = strlen(name);
    printf("The length of The name is: %d", l);

return 0;
}