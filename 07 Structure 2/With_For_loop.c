#include <stdio.h>
#include <string.h> 
 struct student {
     int RollNum;
     int Class;
     char name [20];
 };
int main() {
    struct student s[3];
    for(int i=0; i<=3; i++) {
        printf("Enter The Name of Student: ");
        scanf("%s", &s[i].name);
        printf("Enter The Roll Number of Student: ");
        scanf("%d", &s[i].RollNum);
        printf("Enter A class of Student: ");
        scanf("%d", &s[i].RollNum);
    }

    for(int i=0; i<=3; i++) {
        printf("The Details of %d student \n", i);
        printf("The Name of Student is: %s \n", s[i].name);
        printf("The Roll Number of Student is: %d \n", s[i].RollNum);
        printf("The Class of Student is: %d \n", s[i].Class);
    }
return 0;
}