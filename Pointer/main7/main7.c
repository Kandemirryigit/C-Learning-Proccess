#include <stdio.h>

int main()
{
    int number=15;
    int *pointer=&number;  // pointer variable stores the address of the number variable
    int result=0;
    
    result=*pointer+5;  // 15+5=20

    printf("Result is: %d",result);
    return 0;
}

// As you can see from above.I can reach the value of the pointer like that