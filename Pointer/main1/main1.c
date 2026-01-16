#include <stdio.h>

int main()
{
    int x=10;
    int *p=&x;

    printf("x= %d\n",x);  // x=10
    printf("Address of x=%p\n",&x);  // %p means pointer
    printf("p= %p\n",p);
    printf("Value pointed to by p= %d\n",*p);

    return 0;
}

// &x stores x's address
// p stores x's address
// *p stores the value of x
// *p means go to the memmory address stored in p and get the value