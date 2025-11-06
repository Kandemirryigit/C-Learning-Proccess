/*
Learning how to create functions
*/


#include <stdio.h>


// Funtions type is void 
// It means this function is not going to return anything
// function(void) this void means my function is not going to take parameter.You don't have to write that.It's optional

void function1(void)
{
    printf("Hello ");
}


void function2(void)
{
    printf("World");
}


// I can call functions like this
int main()
{
    function1();
    function2();
    
}


// It's good to create the functions above main function 
// Because when I call that functions my main function knows about them
// If I create them below main function and don't initilaze them above main function main can't know them and program crashes
// If I create the functiopns below main function then I need to initalize them above main 