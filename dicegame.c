/* dicegame.c */
/* start off 1000, make bet on dice so any number under 1000,
 when bet made, if correct bet tripled else or u lose it
 make quit a game by pressing q else if money == 0 game over
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int guess = 0, balance = 1000, userbet = 0;
    srand(time(NULL)); //srand sets seed, time counts s since 1970s

    printf("%d\n", userbet);
    int test = rand() % 6 + 1;
    printf("%d\n", test);

    printf("How much do you want to bet??\n");
    scanf("%d", &userbet);
    
    if (userbet <= balance ) {
        balance = balance - userbet;

        printf("Guess the number from 1-6!\n");
        scanf("%d", &guess);
    
        if (guess == test) {
            printf("WIN\n");
            userbet = userbet * 3;
        
        } else {
            userbet = 0;
            printf("You lost... But try again\n ");
        }

    } else {
        printf("Not enough sufficient money... - %d \n");
        balance = userbet + balance;
    }
    
  //  { else 


 //   }
      
    return 0;
}


