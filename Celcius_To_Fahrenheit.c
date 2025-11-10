/*
- Take an input celcius then convert it to Fahrenheit
*/
#include <stdio.h>

int main()
{
    float celcius=0;
    float fahrenheit=0;

    printf("How much Celcius you want to convert: ");
    scanf("%f",&celcius);

    fahrenheit=(celcius*9/5)+32;

    printf("It's %.2f Fahrenheit",fahrenheit);

}