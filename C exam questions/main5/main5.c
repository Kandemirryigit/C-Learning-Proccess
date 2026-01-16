///////////////////////////////////////
// COUNT DIFFERENT CHARACTERS IN A FILE
///////////////////////////////////////



#include <stdio.h>

int main()
{
    int seen[256]={0};  // for all ASCII characters
    int ch;
    int count=0;


    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main5/data.txt","r");
    if(fp==NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    while((ch=fgetc(fp))!=EOF)   // fgetc returns ASCII number of the characters
    {
        if(seen[ch]==0)
        {
            seen[ch]=1;
            count++;
        }
    }

    fclose(fp);
    printf("Different character count: %d",count);

    return 0;
}