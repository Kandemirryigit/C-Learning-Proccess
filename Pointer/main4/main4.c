#include <stdio.h>

void addOne(int *n)
{
    *n= *n+1;
}


int main()
{
    int x=5;
    addOne(&x);

    printf("%d\n",x);  //prints 6

    return 0;
}