// fahrenheit to other
#include<stdio.h>
int main()
{
    float f,c,k;
    printf("enter the temperature in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    k=c+273.15;
    printf("the temperature %f degree in fahrenheith is %f degree in celsius and %f degree in kelvin",f,c,k);
    return 0;
}
