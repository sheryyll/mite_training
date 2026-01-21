// 5.  Reverse a string without using built-in string functions
#include<stdio.h>
#include<string.h>

void reverseString(char str[]){
    int start = 0;
    int end  = strlen(str) - 1;

    printf("\nBefore reversing: %s\n", str);

    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("After reversing: %s", str);
}

int main(void){
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    return 0;

}