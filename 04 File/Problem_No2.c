#include <stdio.h>
int main() {
    int num;
    printf("Enter The Number: ");
    scanf("%d", &num);
    FILE *ptr;
    ptr = fopen("Table.txt", "w");
    for(int i=0; i<10; i++) {
        fprintf(ptr, "%d X %d = %d \n", num, i+1, num*(i+1));
    }
    fclose(ptr);
return 0;
}