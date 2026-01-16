#include <stdio.h>

int main()
{
    int count=10,x;  // created 2 variable count=10 and x
    int *int_pointer; // declared a pointer with type int

    int_pointer=&count; // int_pointer equals count variable's address
    x=*int_pointer; // x equals int_pointer's value

    printf("Count: %d , x=%d ",count,x); 
    return 0;
}