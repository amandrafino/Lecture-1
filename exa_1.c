#include <stdio.h>

// Function prototype declaration
void displayHeightAndWeight(int height, int weight);


int main(void) {
    // Local variables in main function
    int myHeight = 70;
    int myWeight = 210;

    // Function call
    displayHeightAndWeight(myHeight, myWeight);

    return 0;
}

// Function definition
void displayHeightAndWeight(int height, int weight) {
    printf("My height is %d inches.\nMy weight is %d pounds.\n", height, weight);
        
}
