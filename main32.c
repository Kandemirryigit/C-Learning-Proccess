/*
Learning getc and stdin
*/

#include <stdio.h>


// getc() function in C is used for reading a single character from a file or standard input
// stdin is a predefined file stream in C used to read input from the keyboard

int main()
{
    int kr;
    kr = getc(stdin);
    printf("Ascii code is:%d , Character is:%c\n", kr, kr);  
    return 0;

}