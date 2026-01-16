#include <stdio.h>

int main()
{
    int number=0;
    int *pnumber=NULL;

    number=10;
    pnumber=&number;
    *pnumber+=25; // *pnumber=10 and I added 25 above it 

    printf("The Value is: %d",*pnumber);  // output: 35
    
    return 0;
}
