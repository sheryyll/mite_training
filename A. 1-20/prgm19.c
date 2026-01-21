// Compare two strings and check if they are equal (manual)
#include <stdio.h>
#include <string.h>  // only for strlen if needed

int main(void) {
    char str1[50], str2[50];
    int index = 0;

    // read input
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline character from fgets
    if(str1[strlen(str1)-1] == '\n') str1[strlen(str1)-1] = '\0';
    if(str2[strlen(str2)-1] == '\n') str2[strlen(str2)-1] = '\0';

    // compare manually
    while(str1[index] != '\0' && str2[index] != '\0') {
        if(str1[index] != str2[index]) {
            printf("%s and %s are not equal\n", str1, str2);
            return 0;
        }
        index++;
    }

    // check if both strings ended
    if(str1[index] == '\0' && str2[index] == '\0') {
        printf("%s and %s are equal\n", str1, str2);
    } else {
        printf("%s and %s are not equal\n", str1, str2);
    }

    return 0;
}
