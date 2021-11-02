#include <stdio.h>
typedef struct showDate{
    int day;
    int month;
    int year;
} date;
 
void display(date d) {
printf("The Date Of Birth is: %d/%d/%d \n", d.day, d.month, d.year);
}
int main() {
   date d = {11, 04, 2003};

   display(d);
return 0;
}