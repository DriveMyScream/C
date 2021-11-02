#include <stdio.h>
#include <string.h>
 struct student {
     int RollNum;
     int class;
     char name [15];
 };
int main() {
   struct student s1;
   s1.RollNum = 442;
   s1.class = 12;
   strcpy(s1.name, "Shubham");

   printf("The Roll Number of Student is: %d \n", s1.RollNum);
   printf("The Class of Student is: %d \n", s1.class);
   printf("The name of Student is: %s \n", s1.name);
return 0;
}