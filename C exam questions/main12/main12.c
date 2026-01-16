///////////////////////////////////////////////////////////////
// TAKE A STRING 
// MAKE FIRST LETTER UPPERCASE AND THE OTHER ONES ALL LOWERCASE
///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>


void func(char *string)
{
    int stringLenght=0;
    int i=0;


    while(string[i]!='\0')
    {
        stringLenght++;
        i++;
    }


    for(int i=0;i<stringLenght;i++)
    {
        string[0]=toupper(string[0]);
        string[i+1]=tolower(string[i+1]);
    }

    printf("%s",string);

}



int main()
{
    char string[100];

    printf("Enter a string: ");
    scanf(" %[^\n]",string);
    getchar();

    func(string);

    return 0;
}