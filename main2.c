/*
Define variables and learn data types
*/



#include <stdio.h>


// when we want to define a variable we should declare its data type

// int ---> Integer numbers
// float ---> Floating numbers (4 byte) (can store 6-7 digits)
// double ---> Floating numbers  (8 byte) (can store 15-16 digits)
// char ---> One character

// short ---> Use less memory ,smaller range
// long ---> Use more memory,larger range
// long long ---> Use even more memory,store huge values

// Each data type allocate different size in the memory
// Because of that if you wanna create an effective program you should be careful when defining a variable's data type



int main(void)
{
    int number1=17;             // Integer number (4 byte)
    short int number2= 18;      // Integer number (2 byte)
    long int number3=20;        // Integer number (4 byte)
    long long int number4=40;   // Integer number (8 byte)
    
    float number5= 5.5;         // Float number (4 byte)

    double number6=6.7;         // Double number (8 byte)
    long double number7= 6.8;   // Double number (16 byte)

    char character='A';         // char (1 byte) 

    printf("int is %d byte\n",sizeof(number1));            // int is 4 byte
    printf("short int is %d byte\n",sizeof(number2));      // short int is 2 byte
    printf("long int is %d byte\n",sizeof(number3));       // long int is 4 byte
    printf("long long int is %d byte\n",sizeof(number4));  // long long int is 8 byte

    printf("float is %d byte\n",sizeof(number5));          // float is 4 byte

    printf("double number is %d byte\n",sizeof(number6));  // double is 8 byte
    printf("long double number is %d byte\n",sizeof(number7));  //long double is 16 byte

    printf("char is %d byte",sizeof(character));   // char is 1 byte

    return 0;

}


// long int and just int are same so default int is already long int

// I can't use long long,short,long with float
