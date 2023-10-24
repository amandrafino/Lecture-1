#include <stdio.h>

// Function prototype declaration
void enterCountry(char country[]);
void enterContinent(char continent[]);
void printCountryAndContinent(char country[], char continent[]);

int main(void) {
    char country[50];
    char continent[50];

    enterCountry(country);
    enterContinent(continent);

    printCountryAndContinent(country, continent);

    return 0;
}

// Function Definition
void enterCountry(char country[]) {
    printf("Country name: ");
    scanf("%[^\n]%*c", country);
}

// Function Definition
void enterContinent(char continent[]) {
    printf("Continent name: ");
    scanf("%[^\n]%*c", continent);
}

// Function Definition
void printCountryAndContinent(char country[], char continent[]) {
    printf("Country Name: %s\n", country);
    printf("Continent: %s\n", continent);
}

