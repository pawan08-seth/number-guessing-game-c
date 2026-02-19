#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess=0, attempts = 0 ;
    // code for number generation
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1
    //printf("the number is %d\n", number);
    // keep running the loop untill the number is gussed
    do
    {
        printf(" enter  your guessed  number between 1 to 100");
        scanf("%d", &guess);
        attempts++;
        if (guess > number)
        {
            printf("lower number please\n");
        }
        else if (guess < number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("congratulations you gusses the number in %d attempts\n", attempts);
        }
     } while (guess !=number);
        return 0;
    }
