/*
- Learning Bitwise operations
*/

#include <stdio.h>

// a is 25 so its 00011001
// b is 12 so its 00001100
// x=a&b is 00001000

int main()
{
    unsigned char a=25,b=12,c;
    c=a&b;
    printf("%d & %d =%d",a,b,c);
    return 0;

}
