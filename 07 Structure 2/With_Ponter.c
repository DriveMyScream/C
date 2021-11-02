#include <stdio.h>
#include <string.h>
  struct student {
      int RollNum;
      int Class;
      char name [20];
  };
int main() {
     struct student s1;
     struct student *ptr;
     ptr = &s1;
     (*ptr).RollNum = 442;
     (*ptr).Class = 12;
     strcpy((*ptr).name, "Shubham");

    printf("The Roll Number of Student is: %d \n", (*ptr).RollNum);
    printf("The Class Of Student is: %d \n", (*ptr).Class);
    printf("The Name of Student is: %s \n", (*ptr).name);

return 0;
}