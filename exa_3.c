#include <stdio.h>

// Constant declaration
#define MAX_SIZE 50


// Function prototype declaration
void enterCountry(char country[]);
void enterContinent(char continent[]);
void printCountryAndContinent(char country[], char continent[]);

// The main() function
int main(void) {
    char country[MAX_SIZE];
    char continent[MAX_SIZE];

    enterCountry(country);
    enterContinent(continent);

    printCountryAndContinent(country, continent);

    return 0;
}

// Function to get cointry name from user
void enterCountry(char country[]) {
    printf("Country name: ");
    if (scanf("%[^\n]%*c", country) != 1) {
        printf("Error reading country name.\n");
    }
}

// Function to get continent name from user
void enterContinent(char continent[]) {
    printf("Continent name: ");
    if (scanf("%[^\n]%*c", continent) != 1) {
        printf("Error reading continent name\n");
    }
}

// Function to get print country and continent
void printCountryAndContinent(char country[], char continent[]) {
    printf("Country Name: %s.\n", country);
    printf("Continent: %s.\n", continent);
    printf("The country of %s is on the continent of %s.\n", country, continent);
}

