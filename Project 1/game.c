#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is %d\n", number);
    // We will keep runnig the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100 :\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Enter lower number please\n");
        }
        else if (guess < number)
        {
            printf("Enter higher number please\n");
        }
        else
        {
            printf("You guessed it right !!!\n");
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}