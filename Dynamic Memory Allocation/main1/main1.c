#include <stdio.h>


// C is all about being an efficient language
// Cuz of it C doesn't want to use a ton of memory 
// Becaues C runs on embedded systems,real-time programming
// Because of this reasons dynamic memory allocation is too much important
// If you need 10 bayts memory give you that
// If you need 5 bayts memory gives you that not much or less

// If you used fixed sizes when writing a program then your program can crash
// Let's assume that you defined an array[10] then what happens if I use 11 or much more characters boom!!!
// Or what happens If I use 3 characters.The other 7 character is for nothing.
// The main purpose of the dynamic memory allocation is prevent this situation


// When we define a fixed size variable memory stores it in the stack
// When we define a variable with dynamic memory allocation then memory stores it in the heap
// stack: local variables,fixed sizes
// heap: Dynamic allocated memory

// malloc: Allocate memory and initalize with garbage values
// calloc: Allocate memory and initalize with 0 not garabage values (much more safe than malloc)
// realloc: Resize memory
// free: release memory


int main()
{

}