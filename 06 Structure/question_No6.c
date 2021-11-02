#include <stdio.h>
typedef struct complex {
    int real;
    int imaginary;
} com;

void display(com c) {
    printf("The real value is: %d \n", c.real);
    printf("The value of imaginary is: %d \n", c.imaginary);
}
int main() {
   com comnum[5];
   for(int i=0; i<5; i++) {
     printf("Enter The real Num %d: ", i+1);
     scanf("%d", &comnum[i].real);
     printf("Enter The Imaginary Num %d: ", i+1);
     scanf("%d", &comnum[i].imaginary);
   }
   for(int i=0; i<5; i++) {
       display(comnum[i]);
   }
   
return 0;
}