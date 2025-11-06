/*
Number guess game 
*/



#include <stdio.h>

int main()
{
    int number = 10;
    int guess;
    int isGameOn = 1;
    int tries = 5;
   
    
    printf("\nThis is guessing game");
    printf("\nI have chosen a number between 0 and 20 which you must guess.");

    while (isGameOn) 
    {
        printf("\nYou have %d tries left.", tries);
        printf("\nEnter a guess: ");
        scanf_s("%d", &guess);
        

        if (guess < 0 || guess>20) {
            printf("I said the number is between 0 and 20.\n");
            tries--;
        }
        else if (number < guess) {
            printf("Sorry,%d is wrong.My number is less than that", guess);
            tries--;
        }
        else if (number > guess) {
            printf("Sorry %d is wrong.My number is greater than that.", guess);
            tries--;
        }
        else {
            printf("Congrulations.you guessed it!");
            isGameOn = 0;
        }
        
        if (tries==0){
            printf("\nSorry you have no more tries left.The number was %d\n GAME OVER",number);
			isGameOn = 0;
        }

    }
    
    
}