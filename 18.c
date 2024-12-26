#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;  

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
       
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

    
        printf("The factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}

