#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student
{
    char name[20];
    int age;
};

int main()
{
    struct Student *s=malloc(sizeof(struct Student));
    if(s==NULL)
    {
        printf("malloc is unsuccessful");
        return 1;
    }

    strcpy(s->name,"yigit");
    s->age=19;

    printf("Name: %s , Age: %d",s->name,s->age);

    free(s);

    return 0;
}