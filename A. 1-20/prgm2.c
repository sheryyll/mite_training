// Check if a number is positive, negative, or zero.
#include<stdio.h>

int main(void) {
    int number;
    
    //read input
    printf("Enter the number: ");
    scanf("%d", &number);

    // logic to check if number is positive, negative or zero
    if(number < 0){
        printf("%d is negative\n", number);
    } else if(number == 0){
        printf("%d is zero\n", number);
    } else{
        printf("%d is positive\n", number);
    }

    return 0;
}