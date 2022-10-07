#include <stdio.h>
#include <string.h>

int main ()
{
    int OutofG = 0 , Guess = 0 , Secret = 5, GuessL = 3, GuessT = 0;

    while(Guess != Secret && OutofG == 0)
    {
        if (GuessT < GuessL)
        {
            printf("Enter your Guess: ");
            scanf("%d", &Guess);
            GuessT++;
        }
        else
            OutofG = 1 ;
    }
        if(OutofG == 0)
        printf("You Win.\n");
        else
        printf("Your Guesses are over.\n");
    }