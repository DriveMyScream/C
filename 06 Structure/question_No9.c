#include <stdio.h>
#include <string.h>
struct info {
    char name [10];
    int id;
    char branch [10];
};
int main() {
    struct info f1;
    printf("Enter The Name: ");
    scanf("%s", &f1.name);
    printf("Enter The id: ");
    scanf("%d", &f1.id);
    printf("Enter The Branch: ");
    scanf("%s", &f1.branch);

    printf("The Entered name is: %s \n", f1.name);
    printf("The Entered id is: %d \n", f1.id);
    printf("The Entered branch is: %s \n", f1.branch);
return 0;
}