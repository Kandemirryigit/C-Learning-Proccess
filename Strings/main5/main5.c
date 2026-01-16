///////////////////////////////////
// COUNT CHARACTERS,WORDS AND LINES
///////////////////////////////////


#include <stdio.h>
#include <strings.h>
#include <ctype.h>


int main()
{
    char str[500];
    printf("Enter a text: ");
    scanf(" %[^\n]",str);

    int letters=0,words=0,lines=1;

    for(int i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
            letters++;
        if(str[i]==' ' || str[i]=='\n')
            words++;
        if(str[i]=='\n')
            lines++;
    }

    printf("Letters: %d\nWords: %d\nLines: %d",letters,words,lines);

    return 0;


}