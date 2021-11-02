#include <stdio.h>

struct vector {
    int x;
    int y;
};

 void display(struct vector vec) {
     printf("The x- dimension is: %d \n", vec.x);
     printf("The y-dimension is: %d \n", vec.y);
 }
int main() {
  struct vector v1, v2;
  printf("Enter a x-dimension: ");
  scanf("%d", &v1.x);
  printf("Enter a y-dimension: ");
  scanf("%d", &v1.y);

  printf("Enter a x-dimension: ");
  scanf("%d", &v2.x);
  printf("Enter a y-dimension: ");
  scanf("%d", &v2.y);
  
  display(v1);
  display(v2);
return 0;
}