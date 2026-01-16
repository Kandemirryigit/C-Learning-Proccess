#include <stdio.h>
#include <string.h>  // For strcpy,strcat
#include <stdlib.h>  // for malloc,realloc,free

int main()
{
    char *str=NULL;

    // Inıtıal memory allocation
    str=malloc(15*sizeof(char));  // Allocated 15 bytes memory (if your hardware says char is 1 byte)
    if(str==NULL)
    {
        printf("Memory allocation is unsuccesful");
        return 1;  // means program finished with an error
    }
    strcpy(str,"jason");  
    printf("String: %s, Address=%p\n",str,str);  



    // Reallocating memory
    // I didn't directly wirte str to realloc because if realloc fails the original memory leaks
    char *temp=realloc(str,25*sizeof(char));  // str was 15 bytes but right now it is 25 bytes so expanded (assumed your hardware says char is 1 byte)
    if(temp==NULL)
    {
        printf("Memory Allocation is unsuccesful");
        free(str);
        return 1;
    }
    str=temp;
    strcat(str,".com");  // strcat is for appending string
    printf("String= %s, Address=%p\n",str,str);

    // Releases heap memory
    // Prevents memory leak
    free(str); 
    str=NULL;

    return 0;
}


// rule: Never assign realloc directly to the original pointer