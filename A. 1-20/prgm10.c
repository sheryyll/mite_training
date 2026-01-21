// Check whether a triangle is valid based on side lengths.
#include<stdio.h>

int main(void) {
    int side1, side2, side3;

    // read input
    printf("Enter the values of 3 sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    //check if side is 0
    if(side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Sides can not have a value of 0\n");
        return 1;
    }

    // inequality logic
    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        printf("Triangle is valid\n");
    } else {
        printf("Triangle is not valid\n");
    }

    return 0;
}