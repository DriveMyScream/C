#include <stdio.h>
typedef struct showDate{
    int day;
    int month;
    int year;
} date;
 
void display(date d) {
printf("The Date Of Birth is: %d/%d/%d \n", d.day, d.month, d.year);
}
int compare(date d1, date d2) {
    if(d1.year > d2.year) {
        return 1;
    } else if(d1.year == d2.year) {
        return 2;
    }
}

int main() {
   date d1 = {11, 04, 2003};
   date d2 = {1, 9, 2021};

   display(d1);
   display(d2);
return 0;
}