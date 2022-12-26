// Q31 (Q32): Write a function to convert Celsius to Fahrenheit. [05:04:07]
#include <stdio.h>
float cel2fah(float tem);
int main()
{
    printf("Enter the temperature in Celsius to get it in Fahrenheit : ");
    float temperature;
    scanf("%f", &temperature);

    printf("Temperature in Fahrenheit : %f", cel2fah(temperature));

    return 0;
}

float cel2fah(float tem)
{
    return tem * (9 / 5) + 32;
}

// pending...