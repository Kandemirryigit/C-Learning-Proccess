#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *name=malloc(20*sizeof(char)); // If your hardware says char is 1 byte then this is going to allocate 20 byte in the memory
    if(name==NULL)
    {
        printf("Memory allocation is unsuccessfull");
        return 1;
    }

    strcpy(name,"Yigit");
    strcat(name," Kandemir");

    printf("%s\n",name);

    free(name); // Give the memory we took back
    name=NULL;

    return 0;
}