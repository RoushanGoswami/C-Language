#include <stdio.h>
int main()

{
    float celcius, f; // declared two variables here
    // Temperature Converter
    printf("Enter the temperature in celcius:"); // user input message
    scanf("%f", &celcius);                       // user input
    f = (celcius * 9 / 5) + 32;                  // value of c into f is converted here

    printf("Temperature in fahrenheit = %f",f); // final output
}
