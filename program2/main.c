#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// If you are taking string and number inputs from user 
// It's good to use getchar function after every number input



struct Book
{
    int id;
    char name[50];
    char aurthor[50];
    int year;

};




// When you want to define function prototypes you also should define their parameters
int addBook();
int loadBooks(struct Book books[]);
void searchWithName(struct Book books[],int count);
void searchWithId(struct Book books[],int count);
int searchBook();
void showBooks();
int updatebook();
int exitFunction();





int addBook()
{
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/program2/data.txt","a");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    struct Book book;
    printf("\n\n\n-------------------\n");
    printf("-----ADD BOOK------\n");
    printf("-------------------");

    printf("\nId of the book: ");
    scanf("%d",&book.id);
    getchar();  // I decided to use getchar after taking number from user

    printf("Name of the book: ");
    fgets(book.name, sizeof(book.name), stdin);
    book.name[strcspn(book.name, "\n")] = '\0';  // remove trailing newline

    printf("Name of the Aurthor: ");
    fgets(book.aurthor,sizeof(book.aurthor),stdin);
    book.aurthor[strcspn(book.aurthor,"\n")]='\0';

    printf("Which year the book released: ");
    scanf("%d",&book.year);
    getchar();

    printf("\nBook added successfully");
    fprintf(fp,"%d,%s,%s,%d\n",book.id,book.name,book.aurthor,book.year);

    fclose(fp);

    
}



int loadBooks(struct Book books[])
{
    FILE *fp = fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/program2/data.txt", "r");
    if(fp == NULL)
    {
        // file doesn’t exist yet
        return 0;
    }

    int count = 0;
    char line[200];

    while(fgets(line, sizeof(line), fp))
    {
        // remove trailing newline
        line[strcspn(line, "\n")] = '\0';

        // parse line
        if(sscanf(line, "%d,%49[^,],%49[^,],%d",
                  &books[count].id,
                  books[count].name,
                  books[count].aurthor,
                  &books[count].year) == 4)
        {
            count++;
        }
    }

    fclose(fp);
    return count;
}



void searchWithId(struct Book books[],int count)
{
    
    int idBook;
    int c;

    printf("\n\n-------------------------\n");
    printf("---- SEARCH WITH ID-----\n");
    printf("--------------------------");

    printf("\nID of the book looking for:  ");
    scanf("%d",&idBook);
    getchar();

    int found=0;

    for(int i=0;i<count;i++)
    {
        if(idBook==books[i].id)
        {
            printf("\nBook Found\n");
            printf("Id: %d\n",books[i].id);
            printf("Name: %s\n",books[i].name);
            printf("Aurthor: %s\n",books[i].aurthor);
            printf("Year: %d\n",books[i].year);

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nBook not found!");

}




void searchWithName(struct Book books[],int count)
{
    char nameBook[50];
    int c;

    printf("\n\n-------------------------\n");
    printf("---- SEARCH WITH NAME-----\n");
    printf("--------------------------");

    printf("\nName of the book looking for:  ");
    fgets(nameBook,sizeof(nameBook),stdin);
    nameBook[strcspn(nameBook,"\n")]='\0';

    int found=0;

    for(int i=0;i<count;i++)
    {
        if(strcmp(books[i].name,nameBook)==0)
        {
            printf("\nBook Found\n");
            printf("Id: %d\n",books[i].id);
            printf("Name: %s\n",books[i].name);
            printf("Aurthor: %s\n",books[i].aurthor);
            printf("Year: %d\n",books[i].year);

            found=1;
            break;
        }
    }

    if(!found)
        printf("\nBook not found!");


}




int searchBook()
{
    struct Book books[100];
    int count=loadBooks(books);  // load existing books count form the file
    int answer;
    printf("\n\n--------------------\n");
    printf("----SEARCH BOOK-----\n");
    printf("---------------------");

    if(count==0)
    {
        printf("\nNo books in library yet!");
        return 0;
    }

    printf("\n1-Search with name: ");
    printf("\n2-Search with ID: ");
    printf("\n\nHow you wanna search: ");
    scanf("%d",&answer);
    getchar();

   

    if(answer==1)
        searchWithName(books,count);
    else if(answer==2)
        searchWithId(books,count);
    else
        printf("\nPlease write a valid number!!");
    



}



void showBooks()
{
    printf("\n\n-----------------------\n");
    printf("----- ALL BOOKS -------\n");
    printf("------------------------");

    struct Book books[100];
    int count=loadBooks(books);

    for(int i=0;i<count;i++)
    {
        printf("\n\nID: %d\n",books[i].id);
        printf("Name: %s\n",books[i].name);
        printf("Aurthor: %s\n",books[i].aurthor);
        printf("Year: %d",books[i].year);
    }
}



int updatebook()
{
    char nameBook[50];
    int found = 0;
    int update;

    struct Book books[100];
    int count = loadBooks(books);

    if (count == 0)
    {
        printf("\nNo books to update!\n");
        return 0;
    }

    printf("\n\n-----------------------\n");
    printf("----- UPDATE BOOK -----\n");
    printf("-----------------------\n");

    printf("\nWhat is the name of the book you wanna update: ");
    fgets(nameBook, sizeof(nameBook), stdin);
    nameBook[strcspn(nameBook, "\n")] = '\0';

    printf("\n1-Update ID\n");
    printf("2-Update name\n");
    printf("3-Update aurthor\n");
    printf("4-Update year\n");

    printf("\nWhich information you wanna update: ");
    scanf("%d", &update);
    getchar();

    for (int i = 0; i < count; i++)
    {
        if (strcmp(nameBook, books[i].name) == 0)
        {
            found = 1;

            printf("\nPrevious informations:\n");
            printf("ID: %d\n", books[i].id);
            printf("Name: %s\n", books[i].name);
            printf("Aurthor: %s\n", books[i].aurthor);
            printf("Year: %d\n", books[i].year);

            if (update == 1)
            {
                printf("\nNew ID: ");
                scanf("%d", &books[i].id);
                getchar();
            }
            else if (update == 2)
            {
                printf("\nNew Name: ");
                fgets(books[i].name, sizeof(books[i].name), stdin);
                books[i].name[strcspn(books[i].name, "\n")] = '\0';
            }
            else if (update == 3)
            {
                printf("\nNew Aurthor: ");
                fgets(books[i].aurthor, sizeof(books[i].aurthor), stdin);
                books[i].aurthor[strcspn(books[i].aurthor, "\n")] = '\0';
            }
            else if (update == 4)
            {
                printf("\nNew Year: ");
                scanf("%d", &books[i].year);
                getchar();
            }
            else
            {
                printf("\nInvalid choice!\n");
                return 0;
            }

            break;
        }
    }

    if (!found)
    {
        printf("\nBook not found!\n");
        return 0;
    }

    // ✅ NOW rewrite the entire file
    FILE *fp = fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/program2/data.txt", "w");
    if (fp == NULL)
    {
        printf("File cannot open!\n");
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%d,%s,%s,%d\n",
                books[i].id,
                books[i].name,
                books[i].aurthor,
                books[i].year);
    }

    fclose(fp);

    printf("\nBook updated successfully!\n");
    return 0;
}



int exitFunction()
{
    exit(0);
    return 0;
}









int main()
{
    int answer;

    do
    {
        printf("\n\n\n-----------------\n");
        printf("------Menu-------\n");
        printf("-----------------");
        printf("\n1-Add Book\n");
        printf("2-Search Book\n");
        printf("3-Show books\n");
        printf("4-Update Book\n");
        printf("5-Exit\n");
        printf("\n\nWhat's Your Choice: ");
        scanf("%d",&answer);
        getchar();

        if(answer==1)
            addBook();
        else if(answer==2)
            searchBook();
        else if(answer==3)
            showBooks();
        else if(answer==4)
            updatebook();
        else if(answer==5)
            exitFunction();
        else
            printf("\n!!!You typed something unvalid please try again!!!\n");



    } while (1);
    




    return 0;
}