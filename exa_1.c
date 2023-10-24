#include <stdio.h>

void height_and_weight(int h, int w);

int main(void) {
    int h = 70;
    int w = 210;
    height_and_weight(h, w);

    return 0;
}

void height_and_weight(int h, int w) {
    printf("My height is %d inches and my weight is %d pounds.\n", h, w);
        
}
