#include <stdio.h>
#include <stdlib.h> // To be able to use malloc,calloc,realloc,free 




int main()
{

    // asks the system for 100 bytes of memory
    // memory comes from the heap
    // the memory is uninitalized(contains garbage values)
    // In this example you are allocating 100 bytes
    // Int is usually 4 bytes (but this thing can change depend on the hardare)
    // 100 bytes=25 integers
    // But this is not clear for every computer because if int is not 4 bytes then its not gonna be 25 integers
    int *pNumber=malloc(100);




    // This works on every computer
    // In here you are saying allocate 25 integer and multiple it the size of the integer
    // And this can allocate enough memory in every computer.No matter what is the size of the integer
    int *pNumber=malloc(25*sizeof(int));




    // If malloc cannot allocate memory for any reason then it returns NULL
    // When you start to allocate memory with malloc you can try if it is succesful or not
    int *pNumber=malloc(25*sizeof(int));
    if(pNumber==NULL)
    {
        printf("Memory allocation is unsuccesful");
        return 1;  // Program finished with an error
    }





    // free releases memory that was previosly allocated on the heap using
    // malloc,calloc,realloc
    // after free
    // that memory is returned to the system
    // you no longer own it
    int *pNumber=malloc(25*sizeof(int));
    free(pNumber);
    pNumber=NULL;





    // It allocates memory dynamically for 75 integers on the heap
    // and initializes all of them to 0.
    // malloc was giving garbage values to integers when initalizng it
    // calloc gives 0 for every integer
    // So In my opinion using calloc is much more safe
    int *pNumber=calloc(75,sizeof(int));
    free(pNumber);
    pNumber=NULL;




    // realloc changes the size of a previously allocated memory block.
    int *p=malloc(5*sizeof(int));  // 5 ints
    p=realloc(p,10*sizeof(int));  // now 10 ints



    // If realloc fils then we can lose original memory cause of that It is important to createa a new pointer to it
    int *pNumber=malloc(25*sizeof(int));  // Original memory
    int *temp=realloc(pNumber,40*sizeof(int));  // I created a copy memory because it is important if realloc fails I should still have original memory.I can't riskt the original value
    if(temp==NULL)
    {
        free(pNumber);
        return 1;
    }

    pNumber=temp;







}



// Rule: Every malloc / calloc must have one free.