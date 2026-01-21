// WAP to add two characters
#include<stdio.h>
int main(void){
    char ch1, ch2, ch3;

    printf("Enter a character: ");
    scanf(" %c", &ch1);
    if(!((ch1 >= 'A' && ch1 <='Z') ||(ch1 >= 'a' && ch1 <= 'z'))){
        printf("Input must be a character\n");
        return 1;
    }

    printf("Enter a character: ");
    scanf(" %c", &ch2);
    if(!((ch2 >= 'A' && ch2 <='Z') ||(ch2 >= 'a' && ch2 <= 'z'))){
        printf("Input must be a character\n");
        return 1;
    }

    ch3 = (int)ch1 + (int)ch2;
    printf("Addition of %c and %c: %d\n", ch1, ch2,ch3);
    return 0;
}