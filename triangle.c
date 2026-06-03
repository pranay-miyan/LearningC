/* traingle.c */
#include <stdio.h>

int area_triangle(int base, int height) {
    int area;
    
    area = 0.5*base*height;
    
    return area;
}

int main() {
    int b, h ,a;
    printf("Base:\n ");
    fflush(stdout);
    scanf("%d", &b);

    printf("Height: ");
    scanf("%d", &h);
    

    a = area_triangle(b, h);
    printf("The area is %d\n", a);

    return 0;
}