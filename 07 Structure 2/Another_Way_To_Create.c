#include <stdio.h>
#include <string.h>

struct student {
    int RollNum;
    int Salary;
    char name [20];
};
int main() {
    struct student s1 = {442, 12345, "Shubham"};
    struct student s2 = {459, 12345, "Sunil"};
    struct student s3 = {620, 12345, "Ganesh"};

    printf("The Name of Student is: %s \n", s1.name);
    printf("The Roll Number of Student is: %d \n", s1.RollNum);
    printf("The Salary of Student is: %d \n", s1.Salary);

    printf("The Name of Student is: %s \n", s2.name);
    printf("The Roll Number of Student is: %d \n", s2.RollNum);
    printf("The Salary of Student is: %d \n", s2.Salary);
    
    printf("The Name of Student is: %s \n", s3.name);
    printf("The Roll Number of Student is: %d \n", s3.RollNum);
    printf("The Salary of Student is: %d \n", s3.Salary);
return 0;
}