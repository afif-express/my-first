#include <stdio.h>

int main() {
    int x, y, smallest, num;

    printf("Enter the number of elements: ");
    scanf("%d", &x);

    printf("Enter number 1: ");
    scanf("%d", &smallest);

    for (y = 2; y <= x; y++) {
        printf("Enter number %d: ", y);
        scanf("%d", &num);

        if (num < smallest) {
            smallest = num;
        }
    }

    printf("The smallest number is: %d\y", smallest);

    return 0;
}

