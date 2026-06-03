/* random.c */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int our_random_function(int max) {
    int x;
    
    x = rand() % max++; // 
    return x;
}

int main() {
    int random;

    srand(getpid()); // getpid = processes count
    random = our_random_function(5);
    printf("%d\n", random);

    random = our_random_function(10);
    printf("%d\n", random);
    
    return 0;
}