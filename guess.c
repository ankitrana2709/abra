#include <stdio.h>
#include <stdlib.h>
int main()
{
    int SecretNo = 5;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 3;
    int outofG = 0;

    while(guess != SecretNo && outofG == 0)
    {
        if (guessCount < guessLimit)
        {
            printf("Enter your guess: ");
        scanf("%d", &guess);
        guessCount++;
        }
        else
            outofG = 1 ;
    }
    if(outofG == 0)
    printf("You Win\n");
    else
        printf("You are out of Guesses\n");
return 0;
}
