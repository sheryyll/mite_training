// Factorial of a given number using iterative approach
#include<stdio.h>

void factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    printf("\n Fatcorial of %d is %d \n", num, fact);
}

int main(void){
    int num;

    printf("Enter number to find its factorial: ");
    scanf("%d", &num);

    if( num <= 0){
        printf("Factorial is defined for only positive number\n");
        return 1;
    }

    factorial(num);

    return 0;
}