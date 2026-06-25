#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int rando = rand() % (max - min + 1) + min;
    int ans = 0;
    int attempts = 0;

    printf("Random number generator!!!!!\n");
    printf("guess a number between %d and %d\n", min, max);

    do{
        scanf("%d", &ans);
        if(ans < rando){
            printf("higher\n");
        }
        else if(ans > rando){
            printf("lower\n");
        }
        attempts++;

    }while(ans != rando);

    printf("the random number is %d\nyou've guessed %d times to get it",rando, attempts );
return 0;
}



