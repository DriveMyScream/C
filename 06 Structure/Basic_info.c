#include <stdio.h>
#include <stdio.h>
  struct employee {
      int id;
      float salary;
      char name [10];
  };
int main() {
    struct employee e1;
    e1.id = 14;
    e1.salary = 12345;
    strcpy(e1.name, "Shubham");

    printf("%d \n", e1.id);
    printf("%.3f \n", e1.salary);
    printf("%s \n", e1.name);
return 0;
}