/* if.c */
#include <stdio.h>
int main () {
    int b, h, answer = 0, userans = 0;
    printf("What is the b value\n");
    scanf("%d", &b);

    printf("What is the h value\n");
    scanf("%d", &h);
    answer = 0.5*b*h;

    printf("What is the answer!");
    scanf("%d", &userans);
    if (answer == userans)
        printf("Correct answer!");
    else
        printf("Wrong answer! The correct answer is %d\n", answer);
    return 0;
  
}