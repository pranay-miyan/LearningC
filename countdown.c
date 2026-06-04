/* countdown.c */
#include <stdio.h>
#include <unistd.h>


int main() {
     int svalue = 10;

     while (svalue >= 0) 
     {
        printf("%d\n", svalue); 
        sleep(1);
        svalue--; 
     }    
  
    return 0;
}