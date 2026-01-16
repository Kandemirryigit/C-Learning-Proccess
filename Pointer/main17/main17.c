#include <stdio.h>



void squareOfNumber(int *x)
{
    int result=0;
    *x=(*x) * (*x);

}



int main()
{
    int number=0;
    int *pnumber=NULL;
    pnumber=&number;

    printf("Print an Integer Number: ");
    scanf("%d",pnumber);

    squareOfNumber(pnumber);

    printf("The Result is: %d",*pnumber);

    return 0;
}