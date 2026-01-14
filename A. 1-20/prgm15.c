// Determine eligibility for voting based on age.
#include<stdio.h>
#define MIN_AGE 18

int main(void) {
    int age;

    // read input
    printf("Enter age: ");
    scanf("%d", &age);

    // logic to check eligibility
    if(age >= MIN_AGE){
        printf("You are eligible to vote\n");
    } else {
        printf("You arent eligible to vote\n");
    }

    return 0;
}