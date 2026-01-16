////////////////////////////////
// TAKE AN INPUT FROM KEYBOARD
// MAKE ALL CHARACTERS UPPERCASE
// ADD - BETWEEN EVERY WORD
////////////////////////////////

#include <stdio.h>
#include <ctype.h>
#include <string.h>




int main()
{
    char arr[100];
    int i=0;

    printf("Enter a string: ");
    scanf(" %[^\n]",arr);
    getchar();

    while((arr[i]!='\0'))    // \0 means end of the string
    {
       if(arr[i]==' ')
       {
        arr[i]='-';
       }
       else
       {
        arr[i]=toupper(arr[i]);
       }

       i++;
    }



    printf("%s",arr);





    return 0;


}