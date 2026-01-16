#include <stdio.h>
#include <strings.h>


int main()
{
    char id[20];
    char className[20];
    int score;
    char letterScoore[10];
    char takenId[20];

    printf("What is your ID: ");
    scanf("%s",takenId);
    getchar();

    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main18/data.dat","r");
    if(fp==NULL)
    {
        printf("file could not be opened!");
        return 1;
    }

    

    while(fscanf(fp,"%19s %19s %d %9s",id,className,&score,letterScoore)==4)
    {
        if(strcmp(id,takenId)==0)
        {
            printf("\nID: %s\nClass Name: %s\nScore: %d\nletter Score: %s\n",id,className,score,letterScoore);
        }
       
    }


    return 0;
}