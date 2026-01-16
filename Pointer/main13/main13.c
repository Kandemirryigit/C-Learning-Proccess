#include <stdio.h>

int main()
{
    int value=0;
    int *pvalue=&value;

    printf("Input an Integer: ");
    scanf("%d",pvalue);  // pvalue equals the address of the value so I can take my input to directly in the address

    printf("You entered: %d",value);


    return 0;
}