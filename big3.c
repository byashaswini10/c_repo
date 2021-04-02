#include <stdio.h>
void bigg3() {
    int number;

    printf("Give an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

   // return 0;
}

