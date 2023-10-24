#include <stdio.h>

// Function prototype declaration
void printStateAndCapital(char state[], char capital[]);
void enterState(char state[]);
void enterCapital(char capital[]);


int main(void) {
    char state[50];
    char capital[50];

    enterState(state);
    enterCapital(capital);

    printStateAndCapital(state, capital);

    return 0;
}


// Function definition
void printStateAndCapital(char state[], char capital[]) {
    printf("You live the the state of %s\n", state);
    printf("The capital of %s is %s\n", state, capital);
}

// Function definition
void enterState(char state[]) {
    printf("What state do you live in: ");
    scanf("%[^\n]%*c", state);
}

// Function definition
void enterCapital(char capital[]) {
    printf("What is the capital of your state: ");
    scanf("%[^\n]%*c", capital);
}

