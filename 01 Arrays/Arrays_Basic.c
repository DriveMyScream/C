#include <stdio.h>
int main() {
     int marks[5];
     marks[0] = 50;
     marks[1] = 51;
     marks[2] = 52;
     marks[3] = 53;
     marks[4] = 54;

    for(int i=0; i<5; i++) {
        printf("%d ", marks[i]);
    }
return 0;
}