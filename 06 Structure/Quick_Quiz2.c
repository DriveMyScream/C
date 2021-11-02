#include <stdio.h>
#include <string.h>
 struct employee{
     int id;
     float salary;
     char name [10];
 };
int main() {
  struct employee e1;
  printf("Enter The Frist Employee Id: ");
  scanf("%d", &e1.id);
  printf("Enter The Salary Of employee: ");
  scanf("%f", &e1.salary);
  printf("Enter The Name of Employee: ");
  scanf("%s", e1.name);
return 0;
}