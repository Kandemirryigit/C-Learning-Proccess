#include <stdio.h>
#include <stdlib.h>



void exitFunction();
int main();




int createFile()
{
    int answer=0;
    int capacity=20;      
    int lenght=0;
    char *write=NULL;          // User can write everything tehere is not any statci lenght size I used dynamic memory Allocaiton
    char filename[100];   // If user writes above 100 byte filename then program crash
    char filepath[200]; 
    int wantToSave=0;
  

    printf("\n\n--------------------------------\n");
    printf("----- CREATE A FILE -------------\n");
    printf("-----------------------------------");


    printf("\n\nCreate a Filename: ");
    scanf(" %99[^\n]",filename);
    getchar();

    snprintf(
    filepath,
    sizeof(filepath),
    "C:/Users/CASPER/Desktop/C-Learning-Proccess/program4/%s.txt",
    filename
);


    FILE *fp = fopen(filepath, "a");
    if(fp==NULL)
    {
        printf("\nOopps File Cannot created!!!");
        return 1;
    }



    printf("\n\nFile created successfuly in C:/Users/CASPER/Desktop/C-Learning-Proccess/program4/%s.txt\n",filename);
    printf("\n1-Write something\n");
    printf("2-Back\n");
    printf("3-Exit\n");

    printf("\nChoose one of them: ");
    scanf("%d",&answer);
    getchar();


    if(answer==1)
    {
        write=malloc(capacity*sizeof(char));
        if(write==NULL)
        {
        printf("Oopss Memory cannot Allocated For Write!!!");
        fclose(fp);
        return 1;
        }

        printf("\n!!! Write text (Press ENTER for new line, press ENTER twice to finish) !!!:\n");

        printf("\n\nWhat you wanna write in the file:\n");

        int c;
        int prev=0;
        while((c = getchar())!=EOF)
        {
            if(c=='\n')
            {
                if (prev == '\n')   // double ENTER → stop input
                break;
            }


            if(lenght+1>=capacity)
            {
                capacity*=2;
                char *temp=realloc(write,capacity*sizeof(char));
                if(temp==NULL)
                {
                    printf("Oopss Memory cannot Allocated For Temp!!!");
                    fclose(fp);
                    return 1;
                }
                write=temp;
            }
            write[lenght++]=c;
            prev=c;
        }

        write[lenght] = '\0';

        printf("\n1-Save\n");
        printf("2-Not Save\n");
        printf("Choose an option: ");

        scanf("%d",&wantToSave);
        getchar();

        if(wantToSave==1)
        {
            printf("\nFile Saved Successfuly\n");
            fprintf(fp,"%s\n",write);
        }
        else if(wantToSave==2)
            printf("\nFile Not Saved");
        else
        {
            printf("\nPlease Choose A Valid Option");
        }
        
        free(write);
        fclose(fp);
        
    }
    else if(answer==2)
        main();
    else if(answer==3)
        exitFunction();
    else
        printf("Please Choose A Valid Option");
    
}



int openFile()
{

}



int deleteFile()
{

}

void exitFunction()
{
    exit(0);
}




int main()
{
    int answer=0;
    printf("\n\n----------------------------------------\n");
    printf("----- KANDEMIR'S TEXT EDITOR-------------\n");
    printf("-----------------------------------------");


    do
    {
        printf("\n1-Create a text file\n");
        printf("2-Open a text file\n");
        printf("3-Delete a file\n");
        printf("4-Exit\n");

        printf("\nchoose one of them: ");
        scanf("%d",&answer);
        getchar();

        if(answer==1)
            createFile();
        else if(answer==2)
            openFile();
        else if(answer==3)
            deleteFile();
        else if(answer==4)
            exitFunction();
        else
            printf("Please choose a valid number");
    
        
    } while (1);



    return 0;
}