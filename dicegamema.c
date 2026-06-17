#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int randomnum(int max) {
    int x;
    x = rand() % max +1; // random num 1 to max

    return x;
}

int main() {
    int balance, bet, guess, dice;

    srand(getpid());

    balance = 1000;

    while (1) {//does it forever
        printf("Make your bet: \n");
        fflush(stdout); //save memory
        scanf("%d", &bet);

        printf("Make your guess (1-6, and 0 means quit)\n");
        scanf("%d\n", &guess);
        if (guess == 0)
            return 0;

        printf("Throwing the dice...\n");
        sleep(2);
        dice = randomnum(6);
        printf("Dice result is - %d\n", dice);

        if (guess != dice) {
            balance = balance - bet;
            printf("Such u loser u lost!!");
        }
        else {
            bet *= 3;
            balance += bet;
            printf("You WON!!\n");
        }

        if (balance == 0) {
            printf("GAME OVER\n");
            return 0;
        }
        printf("Balance : $%d\n", balance);


        return 0;
    }
}