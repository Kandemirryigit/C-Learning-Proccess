//////////////
// FIND OUTPUT
//////////////


#include <stdio.h>


int main()
{
    int a=5,b=2,c=0;

    c=++a+b;

    printf("%d %d %d ",a,b,c);  // output: 6 2 8

    return 0;
}