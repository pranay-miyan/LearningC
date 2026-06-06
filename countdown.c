/* countdown.c */
#include <stdio.h>
#include <unistd.h>


int main() {
     int svalue = 6;

     while (1) 
     {
        svalue--; 
        if (svalue == 3)
            continue; //ignore that value above
        printf("%d\n", svalue); 
        sleep(1);
        

        if (svalue < 1) { 
            break;
        }
     }    
  
    return 0;
}