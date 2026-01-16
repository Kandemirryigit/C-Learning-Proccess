#include <stdio.h>

#define FIRST_WIGHT 0.3
#define SECOND_WEIGHT 0.7

struct Student
{
    char name[50];
    char surname[50];
    int firstGrade;
    int secondGrade;
    float FinalNote;

};


int main()
{
    FILE *fp1=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/program5/notes.txt","a");
        if(fp1==NULL)
        {
            printf("Notes file cannot opened");
            return 1;
        }

    
    FILE *fp2=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/program5/Succesfull Students.txt","a");
    if(fp2==NULL)
        {
            printf("Successful Students file cannot opened");
            return 1;
        }

    FILE *fp3=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/program5/Unsuccesfull Students.txt","a");
    if(fp3==NULL)
        {
            printf("Unsuccessful Students file cannot opened");
            return 1;
        }


    int students;
    printf("How many students are there: ");
    scanf("%d",&students);
    getchar();

    struct Student arr[students];

    for(int i=0;i<students;i++)
    {
        printf("Name surname firstgrade secondgrade:  ");
        scanf("%49s %49s %d %d",arr[i].name,arr[i].surname,&arr[i].firstGrade,&arr[i].secondGrade);
        getchar();

        arr[i].FinalNote=(arr[i].firstGrade*FIRST_WIGHT)+(arr[i].secondGrade*SECOND_WEIGHT);

        fprintf(fp1,"%s %s %d %d %.2f\n",arr[i].name,arr[i].surname,arr[i].firstGrade,arr[i].secondGrade,arr[i].FinalNote);



        if(arr[i].FinalNote>=60)
        {
            fprintf(fp2,"%s %s %.2f\n",arr[i].name,arr[i].surname,arr[i].FinalNote);
        }
        else
        {
            fprintf(fp3,"%s %s %.2f\n",arr[i].name,arr[i].surname,arr[i].FinalNote);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);


    return 0;
}