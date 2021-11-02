#include <stdio.h>
int main() {
     int num; 
     int num2;
     FILE *ptr;
     ptr = fopen("simple.txt", "r");
     if(ptr == NULL) {
         printf("This File is does not exist \n");
     } else {
     fscanf(ptr, "%d", &num);
     fscanf(ptr, "%d", &num2);
     printf("The Value of Num is: %d \n", num);
     printf("The Value of Num is: %d \n", num2);
     fclose(ptr);
     }
return 0;
}