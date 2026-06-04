/* sleep.c */
#include <stdio.h>
#include <unistd.h>


int main() {
    printf("Wait while processing...\n");
    fflush(stdout);
    sleep(3); // to freeze runtime of program, (seconds)

    printf("ok\n");
    return 0;
}