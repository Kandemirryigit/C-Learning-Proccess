#include <stdio.h>

int main()
{
    int x=10;
    int *p=&x;

    *p=20;  // go to the address of p and set the value to 20

    printf("x=%d\n",x);

    return 0;
}