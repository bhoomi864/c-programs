//number guessing game
/* we will write a program that generates a random number and ask the player to guess it 
if the player's guess is higher than the actual number ,the program displays" lower number please"
similarly if the users guess is too low then the program prints " higher number please" 
when the user guess the correct number the program displays the number of guesses the player use to arrive at the number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));//initialise random generator
    int randomnumber = (rand()%100)+1;
    int no_of_guesses = 0;
    int guessed;
    //print the random number 
    do
    {
        printf("guess the number ");
        scanf("%d",&guessed);
        if(guessed>randomnumber)
        {
            printf("lower number plaese!\n");
        }
        else if (guessed<randomnumber)
        {
            printf("higher number plaese!\n");
        }
        else{
            printf("congrats!!\n");
        }
        no_of_guesses++;
    }
    while(guessed != randomnumber);
    printf("you guessed the number in %d guesses",no_of_guesses);
    return 0;
        }
        