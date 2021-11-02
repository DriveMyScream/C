#include <stdio.h>
 struct student{
     int RollNum;
     int Class;
     char name [15];
 };
  void display(struct student stu) {
      printf("The Name of Student is: %s \n", stu.name);
      printf("The Roll Number of Student is: %d \n", stu.RollNum);
      printf("The Class of Student is: %d \n", stu.Class);
  }
int main() {
     struct student s1;
     struct student *ptr;
     ptr = &s1;
     ptr->RollNum = 442;
     ptr->Class = 12;
     strcpy(ptr->name, "Shubham");
   
    display(s1);
return 0;
}