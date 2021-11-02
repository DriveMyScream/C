#include <stdio.h>
#include <string.h>
 struct student {
     int RollNum;
     int Class;
     char name [15];
 };
int main() {
  struct student s1, s2, s3;
  printf("Enter The Details of Student Frist \n");
  printf("Enter The Name of Student: \n");
  scanf("%s", &s1.name);
  printf("Enter The Roll Number of Student: \n");
  scanf("%d", &s1.RollNum);
  printf("Enter The Class of Student: \n");
  scanf("%d", &s1.Class);
  
  printf("Enter The Details of Student second \n");
  printf("Enter The Name of Student: \n");
  scanf("%s", &s2.name);
  printf("Enter The Roll Number of Student: \n");
  scanf("%d", &s2.RollNum);
  printf("Enter The Class of Student: \n");
  scanf("%d", &s2.Class);

  printf("Enter The Details of Student Third \n");
  printf("Enter The Name of Student: \n");
  scanf("%s", &s3.name);
  printf("Enter The Roll Number of Student: \n");
  scanf("%d", &s3.RollNum);
  printf("Enter The Class of Student: \n");
  scanf("%d", &s3.Class);
  
  printf("The Details of Student Frist \n");
  printf("The Name of Student is: %s \n", s1.name);
  printf("The Roll Number of Student is: %d\n", s1.RollNum);
  printf("The Class of Student is: %d \n", s1.Class);

  printf("The Details of Student Second \n");
  printf("The Name of Student is: %s \n", s2.name);
  printf("The Roll Number of Student is: %d\n", s2.RollNum);
  printf("The Class of Student is: %d \n", s2.Class);

  printf("The Details of Student Third \n");
  printf("The Name of Student is: %s \n", s3.name);
  printf("The Roll Number of Student is: %d\n", s3.RollNum);
  printf("The Class of Student is: %d \n", s3.Class);


return 0;
}