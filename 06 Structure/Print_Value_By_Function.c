#include <stdio.h>
#include <string.h>
struct employee {
    int id;
    float salary;
    char name [20];
};
void show(struct employee emp) {
    printf("The id Of Employee is: %d \n", emp.id);
    printf("The Salary Of employee is: %.2f \n", emp.salary);
    printf("The name of employee is: %s", emp.name);
}
int main() {
   struct employee e1;
   struct employee *ptr;
   ptr = &e1;
   ptr->id = 10;
   ptr->salary = 12345;
   strcpy(ptr->name, "Shubham");
   
   show(e1);
return 0;
}