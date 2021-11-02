#include <stdio.h>
int main() {
     char name [] = "Shubham";
     for(int i=0; i<8; i++) {
         printf("The address of name[%d] is: %u \n",i+1, &name[i+1]);
     }
return 0;
}