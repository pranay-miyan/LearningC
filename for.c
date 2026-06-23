/* for.c */
#include <stdio.h>
#include <assert.h>
#define flush fflush(stdout)

void multi(int t, int v) {
    int result;
    result = t*v;
    printf("%d x %d = %d\n", t, v, result);
}


int main () {
   // for ( before; condition; end of each cycle) how it works,

   int x, table;

   printf("Select multiplication table: "); flush;
   scanf("%d", &table);
   assert((table < 13) && (table > 0));

   for (x=0; x<13; x++) 
    multi(table, x);
    

    return 0;
}