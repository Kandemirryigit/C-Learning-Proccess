/*
- Learning differences between ++k and k++
*/

#include <stdio.h>


// k++ means: Increments after using the variable - “Use the old value first, then increase it.”-
// ++k means: Increments before using the variable - “Increase first, then use the new value.” - 

int main()
{
    int i=0,j,k=7,m=5,n;

    j=m+=2;
    printf("j=%d\n",j);  // j=7

    j=k++>7;
    printf("j=%d\n",j);  // false so its 0 , k++ means use k then increase it

    j=++k>7;
    printf("j=%d\n",j);  // true so a number except 0 , ++k means increase k then use it

    return 0;
}