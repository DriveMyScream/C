#include <stdio.h>
 struct employee {
     int id;
     float salary;
     char name [20];
 };
int main() {
   struct employee e1 = {10, 12345, "Shubham"};
   printf("The Name of Employee: %s \n", e1.name);
   printf("The Id of Employee: %d \n", e1.id);
   printf("The Salary of Employee: %.2f \n", e1.salary);
return 0;
}