#include <stdio.h>  
#include <math.h> 

int main() {
 
    double base, exponent, result_pow;
    printf("Enter the base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    result_pow = pow(base, exponent);  

    double number, result_sqrt;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);
    result_sqrt = sqrt(number);

    printf("The result of %.2f raised to the power of %.2f is: %.2f\n", base, exponent, result_pow);
    printf("The square root of %.2f is: %.2f\n", number, result_sqrt);

    return 0;
}

