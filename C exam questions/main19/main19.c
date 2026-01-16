#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>






int saveAsItIs(FILE *fp,char string[])
{
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main19/SaveAsItIs.dat","a");
    if(fp==NULL)
    {
        printf("SaveAsItIs.dat file could not be opened");
        return 1;
    }

    fprintf(fp,"%s\n",string);

    fclose(fp);
    return 0;

}



int saveAsJustWordsFirstLetterIsUppercase(FILE*fp,char string[])
{
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main19/wordsFirstLetterIsUppercase.dat","a");
    if(fp==NULL)
    {
        printf("WordsFirstLetterIsUppercase.dat file could not be opened");
        return 1;
    }

    int i=0;

    string[0]=toupper(string[0]);
    while(string[i]!='\0')
    {
        if(string[i]==' ')
        {
            string[i+1]=toupper(string[i+1]);
        }
        else
        {
            string[i]=tolower(string[i]);
        }
        
        i++;
    }

    fprintf(fp,"%s\n",string);

    fclose(fp);
    return 0;

}


int saveAsFullLowercase(FILE *fp,char string[])
{
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main19/lowercase.dat","a");
    if(fp==NULL)
    {
        printf("Lowercase.dat file could not be opened");
        return 1;
    }

    int i=0;
    while(string[i]!='\0')
    {
        string[i]=tolower(string[i]);
        i++;
    }

    fprintf(fp,"%s\n",string);

    fclose(fp);
    return 0;

}



int saveAsFullUppercase(FILE *fp,char string[])
{
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main19/uppercase.dat","a");
    if(fp==NULL)
    {
        printf("Uppercase.dat file could not be opened");
        return 1;
    }

    int i=0;

    while(string[i]!='\0')
    {
        string[i]=toupper(string[i]);
        i++;
    }

    fprintf(fp,"%s\n",string);

    fclose(fp);
    return 0;


}




int main()
{
    char string[100];
    int choice;
    int loop=1;

    FILE *fp;

    while(loop)
    {

        printf("Enter a string: ");
        scanf(" %[^\n]",string);
        getchar();


        printf("\n\n\n------------------------------\n");
        printf("-------- MENU ----------------\n");
        printf("------------------------------\n");

        printf("\n1-Save as full uppercase\n");
        printf("2-Save as full lowercase\n");
        printf("3-Save as just first letter's of the word is uppercase\n");
        printf("4-Save it as it is\n");
        printf("5-Exit\n");

        printf("What's your choice: ");
        scanf("%d",&choice);
        getchar();

        switch(choice)
        {
            case 1:
                saveAsFullUppercase(fp,string);
                break;
            case 2:
                saveAsFullLowercase(fp,string);
                break;
            case 3:
                saveAsJustWordsFirstLetterIsUppercase(fp,string);
                break;
            case 4:
                saveAsItIs(fp,string);
                break;
            case 5:
                loop=0;
                break;
            default:
                printf("\nPlease choose a valid option\n");
        }

    }


    return 0;
}