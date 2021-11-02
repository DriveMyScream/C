#include <stdio.h>
int main() {
     FILE *ptr1;
     FILE *ptr2;
     ptr1 = fopen("Simple5.txt", "r");
     ptr2 = fopen("Simple6.txt", "w");
     char c = fgetc(ptr1);
     while(c != EOF) {
         c = fputc(c, ptr2);
         c = fputc(c, ptr2);
         c = fgetc(ptr1);
     }
     fclose(ptr1);
     fclose(ptr2);
return 0;
}