/* dynamic1.c */
#include <stdio.h>
#include <stdlib.h>

int main () {
    //char name[32]; //static memory alocation
    
    char *name;

    name = malloc(32); //memory alocate it can be resized later

    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello %s\n", name);

    free(name); //frees memory prevents memory leaks

    return 0;
}