///////////////////////////
// COUNT LETTERS AND DIGITS
///////////////////////////


#include <stdio.h>
#include <ctype.h>


int main()
{
   char str[100];
    int letters = 0, digits = 0,spaces=0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
            letters++;
        else if(isdigit(str[i]))
            digits++;
        else if(str[i]==' ')
            spaces++;
    }

    printf("Letters: %d, Digits: %d Words: %d\n", letters, digits,spaces+1);

    return 0;


}