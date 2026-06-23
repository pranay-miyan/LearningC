/* switch.c */
#include <stdio.h>

int main () {
    int x;
    printf("Choose between 1. apples, 2. pears, 3. bananas\n");
    scanf("%d", &x); 
/* ts if statements 
    if (x == 1) {
        printf("Apples\n");
    }
    else if (x == 2) {
        printf("Pears\n");
    }
    else if (x == 3) {
        printf("Banana\n");
    }
    else {
        printf("Something else\n");
    }
*/

//switch statements

    switch (x) {
        case 1: /* apples*/
            printf("Apples\n");
            break;
        case 2:
            printf("Pears\n"); //without break it continues case 3-4
            break;
        case 3:
            printf("Bananana\n");
            break;
        default:
            printf("Something else\n");
            break;
    }



    return 0;
}