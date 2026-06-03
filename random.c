/* random.c */
#include <stdio.h>

int our_random_function() {
    int x;
    
    x = rand(10);
    return x;
}

int main() {
    int random;

    random = our_random_function();
    printf("%d\n", random);
    
    return 0;
}