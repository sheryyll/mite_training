// Check whether a number is even or odd without using % operator.
#include<stdio.h>

int main(void) {
    int number;

    // read input
    printf("Enter the number: ");
    scanf("%d", &number);

    //check if its even or odd without using % operator
    if(number & 1){
        printf("%d is odd\n", number);
    }else{
        printf("%d is even\n", number);
    }
    
    return 0;
}