//////////////////////////////////////////////////////////////////////
// SAVE UPPERCASE,LOWERCASE AND DIGIT CHARACTERS INTO DIFFERENT FILES
/////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>


int main()
{
    char character;
    FILE *lowercaseFile;
    lowercaseFile=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main17/lowercase.dat","a");
    if(lowercaseFile==NULL)
    {
        printf("Lowercase file could not be opened!");
        return 1;
    }

    FILE *uppercaseFile;
    uppercaseFile=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main17/uppercase.dat","a");
    if(uppercaseFile==NULL)
    {
        printf("Uppercase file could not be opened!");
        return 1;
    }

    FILE *digit;
    digit=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main17/digit.dat","a");
    if(digit==NULL)
    {
        printf("Digit file could not be opened!");
        return 1;
    }


    for(int i=0;i<10;i++)
    {
        printf("Character-%d: ",i+1);
        scanf("%c",&character);
        getchar();

        if(character>='a' && character<='z')
            fprintf(lowercaseFile,"%c , ",character);
        else if(character>='A' && character<='Z')
            fprintf(uppercaseFile,"%c , ",character);
        else if(isdigit(character))
            fprintf(digit,"%c , ",character);
         
    }
    
    fclose(lowercaseFile);
    fclose(uppercaseFile);
    fclose(digit);

    return 0;
}