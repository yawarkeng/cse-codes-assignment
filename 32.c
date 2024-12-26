
//Program in C to display the series 1 1 2 1 2 3 1 2 3 4  ... upto n integers in triangular matrix form

#include <stdio.h>
int main() {
   
   int i, j, n;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {
    for (j = 1; j <=i; j++) {
        printf("%d", j);
    }
      printf("\n");
   }

   return 0;
}


 
