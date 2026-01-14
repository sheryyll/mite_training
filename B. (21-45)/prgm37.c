// Print all factors of a number.
#include<stdio.h>

int main(void) {
    int num, i;

    // read input
    printf("Enter number: ");
    scanf("%d", &num);

    //logic
    if(num == 0){
        printf("Factors for 0 are not defined\n");
        return 1;
    }

    if(num < 0){
        num = -num;
    }

    printf("Factors for %d are: \n", num);
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            pritnf("%d ", i);
        }
    }

    return 0;
}