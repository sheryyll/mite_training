// Identify whether a triangle is equilateral, isosceles, or scalene.
#include <stdio.h>

int main(void) {
    int side1, side2, side3;

    // read input
    printf("Enter the values of 3 sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    // check if sides are 0 or negative
    if(side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Sides can not have a value of 0 or negative\n");
        return 1;
    }

    // check type of triangle
    if(side1 == side2 && side2 == side3) {
        printf("Triangle is equilateral\n");
    } else if(side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Triangle is isosceles\n");
    } else {
        printf("Triangle is scalene\n");
    }

    return 0;
}
