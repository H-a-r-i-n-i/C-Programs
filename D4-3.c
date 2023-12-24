#include <stdio.h>

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping by value: x = %d, y = %d\n", x, y);
}

void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping by reference: x = %d, y = %d\n", *x, *y);
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Original numbers: x = %d, y = %d\n", num1, num2);

    swapByValue(num1, num2);
    printf("After swap by value in main: x = %d, y = %d\n", num1, num2);

    swapByReference(&num1, &num2);
    printf("After swap by reference in main: x = %d, y = %d\n", num1, num2);

    return 0;
}
