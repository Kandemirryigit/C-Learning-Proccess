#include <stdio.h>

int main()
{
    int i=10;
    float f=2.34;
    char ch='K';

    void *vptr;  // This pointer stores an address, but I don’t know the data type at that address

    vptr=&i;
    printf("Value of i: %d\n",*(int*)vptr);

    vptr=&f;
    printf("Value of f: %.2f\n",*(float*)vptr);

    vptr=&ch;
    printf("Value of ch: %c\n",*(char*)vptr);


    return 0;
}


