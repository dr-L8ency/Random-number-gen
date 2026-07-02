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
    int st_guess = 1;
    int pre_ans = 0;

    printf("Random number generator!!!!!\n");
    printf("guess a number between %d and %d\n", min, max);

    do{
        if (scanf("%d", &ans) != 1) {
        printf("That's not a number, silly\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        continue;
    }
       if (ans > max || ans < min) {
    printf("That's not in the number pool, silly\n");
} else {
    if (!st_guess) { // if this isn't the 1st guess
        int pre_distance = abs(rando - pre_ans);
        int distance = abs(rando - ans);

        if (pre_distance > distance && ans != rando)
            printf("you are getting closer\n");
        else if (pre_distance < distance && ans != rando)
            printf("you are getting further\n");
    }
    if (abs(rando - ans) <= 5 && ans != rando) // if the distance between rando and ans is less than or = 5, do that
        printf("so so close\n");
    else if (ans < rando)
        printf("higher\n");
    else if (ans > rando)
        printf("lower\n");

    pre_ans = ans;
    st_guess = 0;
    attempts++;
}

    }while(ans != rando);

    printf("the random number is %d\nyou've guessed %d times to get it",rando, attempts );
return 0;
}
// so we need an if statment which states that if the number the user guessed is more or less than the random number by a specific number,
//say so close, and if it is further by a specific number say so far
// 600 10
// 620 - 600 = 20
// if (rand-ans < 10



