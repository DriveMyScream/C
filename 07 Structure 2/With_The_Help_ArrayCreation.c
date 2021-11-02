#include <stdio.h>
#include <stdio.h>
 struct student {
     int RollNum;
     int Class;
     char name[15];
 };
     
int main() {
    struct student student1[100];
    student1[0].RollNum = 442;
    student1[0].Class = 12;
    strcpy(student1[0].name, "Shubham");

    student1[1].RollNum = 443;
    student1[1].Class = 12;
    strcpy(student1[1].name, "Sunil");

    student1[2].RollNum = 443;
    student1[2].Class = 12;
    strcpy(student1[2].name, "Ganesh");
return 0;
}