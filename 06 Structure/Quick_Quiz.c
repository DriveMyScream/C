#include <stdio.h>
#include <string.h>
 struct employee {
     int id;
     float salary;
     char name [10];
 };
int main() {
    struct employee e1;
    e1.id = 10;
    e1.salary = 12345;
    strcpy(e1.name, "Shubham");

    struct employee e2;
    e2.id = 11;
    e2.salary = 12345;
    strcpy(e2.name, "Sunil");

    struct employee e3;
    e3.id = 12;
    e3.salary = 12345;
    strcpy(e3.name, "Ganesh");
return 0;
}