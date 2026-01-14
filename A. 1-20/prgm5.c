// Check if a year is a leap year.
#include<stdio.h>

int main(void) {
    int year;
    
    // read input
    printf("Enter year: ");
    scanf("%d", &year);

    // check if its leap year
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
    
    return 0;
}