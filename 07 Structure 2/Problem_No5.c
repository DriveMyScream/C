#include <stdio.h>
 typedef struct Vector {
     int real;
     int imaginary;
 } vect;

 void display(vect c) {
     printf("The Value Of Real Part is: %d \n", c.real);
     printf("The Value of Imaginary Part is: %d \n", c.imaginary);
 }
int main() {
    vect comps[5];
    for(int i=0; i<5; i++) {
        printf("Enter a Real Value Of Number %d \n", i+1);
        scanf("%d", &comps[i].real);
        printf("Enter a Imaginary Value of Number %d \n", i+1);
        scanf("%d", &comps[i].imaginary);
    }

    for(int i=0; i<5; i++) {
        display(comps[i]);
    }
return 0;
}