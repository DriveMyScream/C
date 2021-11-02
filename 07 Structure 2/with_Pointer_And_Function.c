#include <stdio.h>
#include <string.h>
 struct student {
     int RollNum;
     int Class;
     char name [10];
 };

 void display(struct student stu) {
     printf("The name of Student is: %s \n", stu.name);
     printf("The Roll Number of Student is: %d \n", stu.RollNum);
     printf("The Class Of Student is: %d \n", stu.Class);
 }
int main() {
    struct student s1;
    struct student *ptr;
    ptr = &s1;
    ptr->Class = 12;
    ptr->RollNum = 442;
    strcpy(ptr->name, "Shubham");

    display(s1);
return 0;
}