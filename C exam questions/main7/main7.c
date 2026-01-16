//////////////////////////////////////////////////
// CREATE A STRUCT FOR 100 PERSON
// TAKE INFORMATION FROM KEYBOARD FOR THOSE PEOPLE
// NAME,SURNAME,TANSION,PULSE
///////////////////////////////////////////////////

#include <stdio.h>


struct People
{
    char name[50];
    char surname[50];
    float tansion;
    int pulse;
};




void takeInformation()
{
     struct People p[100];

    for(int i=0;i<100;i++)
    {
        printf("\nPerson-%d\n",i+1);

        printf("\nName: ");
        scanf(" %[^\n]",p[i].name);
        getchar();

        printf("Surname: ");
        scanf(" %[^\n]",p[i].surname);
        getchar();

        printf("Tansion: ");
        scanf("%f",&p[i].tansion);
        getchar();

        printf("Pulse: ");
        scanf("%d",&p[i].pulse);
        getchar();
    }


    printf("\n\n\n---------------------------------\n");
    printf("---- PEOPLE INFORMATION ---------\n");
    printf("---------------------------------");

    for(int i=0;i<100;i++)
    {
        printf("\n%s %s %.2f %d\n",p[i].name,p[i].surname,p[i].tansion,p[i].pulse);
    }

}




int main()
{
    takeInformation();
    return 0;
}