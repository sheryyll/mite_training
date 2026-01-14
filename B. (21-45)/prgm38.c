// Count number of factors of a number.
#include<stdio.h>

int main(void) {
    int num, count = 0, i;

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

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            count++;
        }
    }

    printf("%d has %d number of factors\n", num, count);

    return 0;
}