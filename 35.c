
//Program in C to display the following pattern

//    *
//   **
//  ***
// ****

#include <stdio.h>
int main() {
    int i,j,space;
printf("Pattern: \n");
for (i = 1; i <= 4; i++) {
   for (space = 3; space >= i; space --) {
      printf(" ");
   }
   for (j = 1; j <= i; j++) {
      printf("*");
   }
   printf("\n");
}
return 0;
}
