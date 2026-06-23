/* pointers.c */
#include <stdio.h>
#include <string.h>

int main () {
    char string[32];
    char *p; //add * before variable to make pointer

    strncpy(string, "I like apples", 31);
    p = string;

    //p++; // used for string maupilation

    printf("%s\n", p);
    printf("%c\n", *p); //dont access pointer but use at first character

    return 0;
}