/*
Check number's status - positive,negative or zero
*/

#include <stdio.h>

int main(void)
{
    float number;
    printf("Give a number: ");
    scanf("%f",&number);

    if (number<0)
        printf("The number is negative");
    else if (number>0)
        printf("The number is positive");
    else
        printf("the number is zero");

    return 0;

}

// No need to use curly braces because I just have one line after statments

