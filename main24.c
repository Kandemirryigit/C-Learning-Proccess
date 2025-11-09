/*
Learning define 
*/


// I can define the things above the code and I can use them everywhere inside my code
// If something happens in my code then if I want to change something in my code I can just change the definition 
// It's better than changing all code

#include <stdio.h>
#define CALCULATION(x,y) (x+y)
#define SUB(x,y) (x-y)
#define MULTIPLE(x,y) (x*y)
#define DIVISION(x,y) ((y)!=0 ? (x/y): 0)
#define POWERX(x) (x*x)
#define POWERY(y) (y*y)



int main()
{
    int x=10;
    int y=5;

    printf(" Result of %d+%d: %d \n ",x,y,CALCULATION(x,y));
    printf("Result of %d-%d: %d \n ",x,y,SUB(x,y));
    printf("Result of %d*%d: %d \n ",x,y,MULTIPLE(x,y));
    printf("Result of %d/%d: %d \n ",x,y,DIVISION(x,y));
    printf("Result of %d*%d: %d \n ",x,x,POWERX(x));
    printf("Result of %d*%d: %d \n ",y,y,POWERY(y));


    return 0;
}