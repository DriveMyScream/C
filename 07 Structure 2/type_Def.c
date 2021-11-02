#include <stdio.h>
#include <string.h>
  typedef struct student {
      int RollNum;
      int Class;
      char name [15];
  } stu;

  void display(stu emp) {
      printf("The Name of Student is: %s \n", emp.name);
      printf("The Class of Student is: %d \n", emp.Class);
      printf("The Roll Number of Student is: %d \n", emp.RollNum);
  }
int main() {
     stu s1;
     stu *ptr;
     ptr = &s1;
     ptr->Class = 12;
     ptr->RollNum = 442;
     strcpy(ptr->name, "Shubham");

     display(s1);
return 0;
}