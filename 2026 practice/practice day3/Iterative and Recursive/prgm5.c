// Fibonacci using recursion approach

#include<stdio.h>

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}


int main(void){
    int num;

    printf("Enter number to find its fibonacci series: ");
    scanf("%d", &num);

    printf("\nFibonacci Series: \n");

    for(int i = 0; i < num; i++) {
      printf("%d ",fibbonacci(i));            
    }

    return 0;
}