/*
Learning parameters and arguments in functions
*/


#include <stdio.h>


// I don't have to write all code inside main
// Because if I take an error then it is going to be hard to find the error
// I can create little pieces and then I can merge them 
// Every piece has its own logic and mission
// this little pieces are functions
// If I take an error I just have to maintain that funtion -that returns error-


float calculation(float number1,float number2)
{
    float result;
    result=number1+number2;

    return result;
}

float sub(float number1,float number2)
{
    float result;
    result=number1-number2;

    return result;
}




int main()
{
    float number1,number2;
    printf("Number1: ");
    scanf("%f",&number1);

    printf("Number2: ");
    scanf("%f",&number2);

    printf("Sum: %.2f\n",calculation(number1,number2));
    printf("Difference: %.2f\n",sub(number1,number2));

    return 0;
}