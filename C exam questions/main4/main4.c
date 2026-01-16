/////////////////////////
// FIND FILE SIZE(LENGTH) 
/////////////////////////



#include <stdio.h>


int main()
{
    FILE *fp;
    int size;

    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main4/data.txt","r");
    if(fp==NULL)
    {
        printf("File could not be opened");
        return 1;
    }

    fseek(fp,0,SEEK_END);   // Go to end of the file
    size=ftell(fp);         // get position (file size)
    rewind(fp);             // go back to beginning


    printf("File size: %d bytes\n",size);

    fclose(fp);
    return 0;
    
}