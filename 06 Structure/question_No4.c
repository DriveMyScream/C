#include <stdio.h>
#include <string.h>
struct student {
    int rollNum;
    int std;
    char name [10];
};

int main() {
  struct student s1;
  struct student *ptr;
  ptr = &s1;
  ptr->rollNum = 420;
  ptr->std = 12;
  strcpy(ptr->name, "Shubham");

  printf("The Roll Num of student is: %d \n", ptr->rollNum);
  printf("The Standard Of Student is: %d \n", ptr->std);
  printf("The Name of Student is: %s \n",ptr->name);

return 0;
}