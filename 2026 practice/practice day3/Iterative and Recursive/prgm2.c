// Factorial using recursion
#include<stdio.h>

int fact(int num){
    if(num-1 == 0){
        return num;
    } else{
        return num * fact( num - 1);
    }

}

int main(void){
    int num;

    printf("Enter number to find its factorial: ");
    scanf("%d", &num);

    if( num <= 0){
        printf("Factorial is defined for only positive number\n");
        return 1;
    }

    int factorial = fact(num);
    printf("%d", factorial);

    return 0;
}