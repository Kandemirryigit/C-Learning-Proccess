#include <stdio.h>



int main()
{
    int array[10]={10,20,30,40,50,60,70,80,90,100};
    int *ptr;
    ptr=array;  // this is same as &array[0]

    printf("%p\n",ptr);
    printf("%p",&array[0]);
    

    return 0;
}