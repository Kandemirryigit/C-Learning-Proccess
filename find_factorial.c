/*
Find factorial of a given number
*/

#include <stdio.h>

int main()
{
    int number;
    int givenNumber;
    int gameOn=1;
    int result=1;

    printf("Number: ");
    scanf("%d",&number);

    givenNumber=number;

    if (number<0)
    {
        printf("The number should be above 0");
        return 0;  // To end of the loop
    }


    do
    {
        result*=number;
        number-=1;

    }while(number>0);

    printf("Factorial of %d is: %d",givenNumber,result);

    return 0;


}