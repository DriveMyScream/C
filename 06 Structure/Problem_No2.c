#include <stdio.h>
struct vector{
    int x;
    int y;
};
struct vector vectorSum(struct vector e1, struct vector e2) {
    struct vector result;
    result.x = e1.x + e2.x;
    result.y = e1.x + e2.y
    return result;

}
int main() {
struct vector e1, e2, sum;
   printf("Enter The x-dimension: ");
   scanf("%d", &e1.x);
   printf("Enter The y-dimension: ");
   scanf("%d", &e1.y);
  
   printf("Enter The x-dimension: ");
   scanf("%d", &e2.x);
   printf("Enter The y-dimension: ");
   scanf("%d", &e2.y);

   sum = vectorSum(e1, e2);
printf("The sum of x dim is %d and y dim is %d \n", sum.x, sum.y);
return 0;
}