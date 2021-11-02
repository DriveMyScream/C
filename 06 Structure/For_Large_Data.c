#include <stdio.h>
#include <string.h>
 struct employee {
     int id;
     float salary;
     char name [20];
 };
int main() {
 struct employee arr[100];
 arr[0].id = 10;
 arr[0].salary = 12345;
 strcpy(arr[0].name, "Shubham");
 
 arr[1].id = 11;
 arr[1].salary = 12345;
 strcpy(arr[1].name, "Sunil");

 arr[2].id = 12;
 arr[2].salary = 12345;
 strcpy(arr[2].name, "Ganesh");
return 0;
}