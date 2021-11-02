#include <stdio.h>
#include <string.h>
struct vector {
    int x;
    int y;
};
int main() {
    struct vector v1, v2;
    printf("Enter The x-dimension: ");
    scanf("%d", &v1.x);
    printf("Enter The y-dimension: ");
    scanf("%d", &v1.y);

    printf("Enter The x-dimension: ");
    scanf("%d", &v2.x);
    printf("Enter The y-dimension: ");
    scanf("%d", &v2.y);
return 0;
}