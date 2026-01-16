////////////////////////////////////////////////////////////
// TAKE INFORMATION FROM USER AND FIND BMI VALUE
// AND BASED ON THIS BMI VALUE SAVE INFORMATIONS INTO A FILE
////////////////////////////////////////////////////////////



#include <stdio.h>

struct People
{
    char name[50];
    char surname[50];
    float height;
    float weight;
    int age;
    char sex[15];
};



int main()
{
    int countOfPeople;
    float bmi;
    printf("How many people you have: ");
    scanf("%d",&countOfPeople);
    getchar();

    FILE *fp;

    struct People p[countOfPeople];
    for(int i=0;i<countOfPeople;i++)
    {
        printf("\n\n\n------------------------------\n");
        printf("------- PERSON-%d ------------\n",i+1);
        printf("------------------------------\n");



        printf("\nName: ");
        scanf(" %[^\n]",p[i].name);
        getchar();

        printf("Surname: ");
        scanf(" %[^\n]",p[i].surname);
        getchar();

        printf("Height(m): ");
        scanf("%f",&p[i].height);
        getchar();

        printf("Weight(kg): ");
        scanf("%f",&p[i].weight);
        getchar();

        printf("Age: ");
        scanf("%d",&p[i].age);
        getchar();

        printf("Sex: ");
        scanf("%s",p[i].sex);
        getchar();

        bmi = p[i].weight / (p[i].height * p[i].height);


        if(bmi<18.5)
        {
            fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main14/slim.dat","a");
            if(fp==NULL)
            {
                printf("slim.dat file could not be opened");
                return 1;
            }

            fprintf(fp,"%s %s %.2f %.2f %d %s %.2f\n",p[i].name,p[i].surname,p[i].height,p[i].weight,p[i].age,p[i].sex,bmi);
        }
        else if(bmi>=18.5 && bmi<=25)
        {
            fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main14/normal.dat","a");
            if(fp==NULL)
            {
                printf("normal.dat file could not be opened");
                return 1;
            }

            fprintf(fp,"%s %s %.2f %.2f %d %s %.2f\n",p[i].name,p[i].surname,p[i].height,p[i].weight,p[i].age,p[i].sex,bmi);
        }
        
        else if(bmi>25)
        {
            fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/C exam questions/main14/obbesse.dat","a");
            if(fp==NULL)
            {
                printf("obbesse.dat file could not be opened");
                return 1;
            }

            fprintf(fp,"%s %s %.2f %.2f %d %s %.2f\n",p[i].name,p[i].surname,p[i].height,p[i].weight,p[i].age,p[i].sex,bmi);
        }

        

    }


    fclose(fp);

    

}