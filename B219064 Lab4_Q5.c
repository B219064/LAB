#include <stdio.h>



int main(void) {
    srand(time(NULL));//srand () creates a starting point for the series.
    int z = rand() % 20 + 1;//rand is used to generate random numbers.
    int correct = 0; 
    int g; 
    int i = 0; 

    printf("I am thinking of a number between 1 and 20.Can you guess what it is? "); 

   do {
        scanf("%d", &g);
        if (g == z) {
            i++;
            printf("Congratulations!! You did it :)");
            correct = 1; 
        }

        if (g < z) {
            i++;
            printf("Your guess is too low. Guess again. ");
        }

        if (g > z) { 
            i++; 
            printf("Your guess is too high. Guess again. ");
        }
    } while (correct == 0);

    return 0;
}
