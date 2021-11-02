#include <stdio.h>
#include <string.h>
 struct employee {
     int id;
     float salary;
     char name [20];
 };
int main() {
  struct employee arr[50];
  for(int i=0; i<=2; i++) {
      printf("Enter The Id Of Employee: ");
      scanf("%d", &arr[i].id);
      printf("Enter The Salary Of Employee: ");
      scanf("%f", &arr[i].salary);
      printf("Enter The Name of Employee: ");
      scanf("%s", arr[i].name);
  }
return 0;
}