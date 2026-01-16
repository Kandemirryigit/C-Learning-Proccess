#include <stdio.h>

int main()
{
    int number=0;
    int *pnumber=NULL;

    number=10;
    printf("number's address: %p\n",&number);  //number variable's address
    printf("number's value: %d\n\n",number);  // number variable's value

    pnumber=&number;

    printf("pnumber's address: %p\n",(void*)&pnumber); // Pointer's address
    printf("pnumber's size: %zd bytes \n",sizeof(pnumber));  // Pointer's size
    printf("pnumber's value: %p\n",pnumber); // Number variable's address
    printf("value pointed to: %d\n",*pnumber); // number variable's value
    
    return 0;
}

