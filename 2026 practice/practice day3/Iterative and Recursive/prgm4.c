// GCD using recursion
#include<stdio.h>

int gcdElements(int num1, int num2){
    if(num1!=num2){
        if(num1>num2){
            return gcdElements(num1-num2, num2);
        }  else{
            return gcdElements(num1, num2-num1);
        }
    }
}

int main(void){
    int num1 = 0, num2 = 0;

    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if(num1 < 0)
        num1 *= -1;
    
    if(num2 < 0)
        num2 *= -1;
    
    int gcd = gcdElements(num1, num2);
    printf("GCD of %d and %d is : %d", num1, num2, gcd);

    return 0;
}