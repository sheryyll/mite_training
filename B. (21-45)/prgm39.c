// Check if a number is prime.
#include<stdio.h>

int main(void) {
    int num, i, isPrime = 1;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    if(num <= 1){
        printf("%d is not a prime number\n", num);
        return 0;
    }

    for( i = 2; i <= num / 2; i++) {
        if(num% i == 0){
            isPrime = 0;
            break;
        }
    } // or for( i = 2; i *i <= num; i++)

    if(isPrime){
        printf("%d is a prime number\n", num);
    } else{
        printf("%d is not a prime number\n", num);
    }

    return 0;
}