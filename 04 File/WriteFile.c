#include <stdio.h>
int main() {
      FILE *ptr;
      int number = 45;
      ptr = fopen("simple2.txt", "w");
      fprintf(ptr, "The Number is: %d", number);
      fclose(ptr);
return 0;
}