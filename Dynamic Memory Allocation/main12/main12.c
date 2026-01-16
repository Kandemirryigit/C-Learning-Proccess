// This is the power of dynamic memory allocation



#include <stdio.h>
#include <stdlib.h>


int main()
{

    // At the begginning of the code we defined the memory is going to be 10 byte
    int size=10;
    char *str=malloc(size);
    if(str==NULL)
    {
        printf("Malloc is unsuccessful");
        return 1;
    }

    int i=0;
    int ch;

    printf("Enter a string: ");

    // getchar is used to read a single character from input,
    while((ch=getchar())!='\n')
    {
        str[i++]=ch;

        // If the input is above then 10 (that we defined at the beggining of the code)
        if(i>=size-1)
        {
            size*=2;  // Then size is going to be multiple with 2
            char *temp=realloc(str,size);
            if(temp==NULL)
            {
                printf("realloc is unsuccessful");
                return 1;
            }

            str=temp;
        }
    }


    str[i]='\0';
    printf("you entered: %s\n",str);

    // we used memory and we are done with it and we should give it to operating system
    free(str);

    // I didnt use str=NULL because ım sure that ı'll not use str pointer again in my code
    
    return 0;

}