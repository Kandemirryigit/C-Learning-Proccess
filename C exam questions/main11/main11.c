//////////////////////////////////////////////////////////
// FIND COMMA,POINT,SEMICOLON,QUESTION MARKS INSIDE A FILE
// AND COUNT THEM
///////////////////////////////////////////////////////////




#include <stdio.h>



void func(FILE *fp,int *comma,int *point,int *semicolon,int *question)
{
    *comma=*point=*semicolon=*question=0;
    int ch;

    while((ch=fgetc(fp))!=EOF)
    {
        if(ch==',')
            (*comma)++;
        else if(ch=='.')
            (*point)++;
        else if(ch==';')
             (*semicolon)++;
        else if(ch=='?')
              (*question)++;
        
    }


}





int main()
{
    int comma,point,semicolon,question;

    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main11/data.txt","r");
    if(fp==NULL)
    {
        printf("File could not be opened");
        return 1;
    }


    func(fp,&comma,&point,&semicolon,&question);

    printf("Comma: %d\n",comma);
    printf("Point: %d\n",point);
    printf("Semicolon: %d\n", semicolon);
    printf("Question Mark: %d\n", question);


    fclose(fp);

   
    return 0;
}



