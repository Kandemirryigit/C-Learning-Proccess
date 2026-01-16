////////////////
// STRING LENGTH
////////////////


#include <stdio.h>
#include <strings.h>


int main()
{
    char text[100];
    printf("Enter text: ");
    scanf(" %[^\n]",text);
    getchar();

    int length=strlen(text);
    printf("The length of your text is: %d",length);

    return 0;


}