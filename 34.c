
//Program in C to display the following pattern

//****
//***
//**
//*

#include <stdio.h>
int main() {
    int i,j;
printf("Pattern: \n");
for (i = 4; i >= 1; i--) {
   for (j = 1; j <= i; j++) {
    printf("*");
   }
   printf("\n");
}
return 0;
}
