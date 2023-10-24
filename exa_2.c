#include <stdio.h>

// Function prototype declaration
void stateAndCapital(char state[], char capital[]);

int main() {
    char state[] = "Vermont";
    char capital[] = "Montpelier";
    stateAndCapital(state, capital);
    
    return 0;
}

// Function definition
void stateAndCapital(char state[], char capital[]) {
    printf("I live in the state of %s\n", state);
    printf("The capital of %s is %s\n", state, capital);
}
