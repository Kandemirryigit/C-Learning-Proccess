////////////////////////////////
// TAKE AN INPUT FROM KEYBOARD
// MAKE ALL CHARACTERS UPPERCASE
// ADD - BETWEEN EVERY CHARACTER
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

    while(arr[i]!='\0')
    {
        if(arr[i]!=' ')
        {
            char c=toupper(arr[i]);
            printf("%c",c);

            if(arr[i+1]!='\n' && arr[i+1]!=' ')
            {
                printf("-");
            }
        }
        else
        {
            printf("-");
        }

        i++;
    }

   
    return 0;


}