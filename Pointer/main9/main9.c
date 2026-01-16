#include <stdio.h>

int main()
{
    int number=10;  
    int *pnumber=NULL;

    pnumber=&number; // stores the address of the number variable
    
    printf("pnumber's value: %p",pnumber);
    return 0;
}

// %p means the address value of the pointer