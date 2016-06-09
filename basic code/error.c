#include<stdio.h>

float fahrenheithToCelsius(float temp)
    {
    return (temp - 32) * 5 / 9;
    }

float celsiusToKelvin(float temp)
    {
    return temp + 273;
    }

int main()
    {
    float fahr, cels; kelv
    printf("Enter the degrees in fahrenheit ?");
    scanf("%f",&fahr);
    cels = fahrenheithToCelsius(fahr);
    kelv = celsiusToKelvin(cels);
    fprintf("Degrees Fahrenheit is: %3.2f\n",fahr)
    fprintf("Degrees Celsius is: %3.2f\n",cels);
    fprintf("Degrees Kelvin is: %3.2f\n",kelv);
    return 1
    }
