#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char You, char Comp) {
/* returns 1 if You Win, and -1 if You Lose and 0 if Match is draw. 
   condition for draw.
   cases covered -> ss gg ww  */
  if(You == Comp) {
      return 0;
  }
/* Non-Draw conditions
   sg gs sw ws gw wg */

 if(You=='s' && Comp=='g') {
     return +1;
 } else if(You=='s' && Comp=='g') {
     return -1;
 }
 if(You=='s' && Comp=='w') {
     return +1;
 } else if(You=='w' && Comp=='s') {
     return -1;
 }
 if(You=='g' && Comp=='w') {
     return +1;
 } else if(You=='w' && Comp=='g') {
     return -1;
 }
}
int main() {
     char You, Comp;
     srand(time(0));
     int number = rand()%100+1;

     if(number<33) {
         Comp = 's';
     } else if(number > 33 && number <66) {
         Comp = 'w';
     } else {
         Comp = 'g';
     }

     printf("Enter 's' for Snake, 'w' for Water and 'g' for Gun: \n");
     scanf("%c", &You);
     int result = game(You, Comp);
     if(result==0) {
         printf("The Match is Draw \n");
     } else if (result == 1) {
         printf("You Win \n ");
     } else {
         printf("Computer is Win \n");
     }
    printf("You Chose %c and Computer Choose %c \n", You, Comp);

return 0;
}