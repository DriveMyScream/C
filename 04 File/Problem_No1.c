#include <stdio.h>
int main() {
     int a, b, c;
     FILE *ptr;
     ptr = fopen("Simple4.txt", "r");
     fscanf(ptr, "%d %d %d", &a, &b, &c);
     printf("The Three Variable is: %d %d %d", a, b, c);
     fclose(ptr);
return 0;
}