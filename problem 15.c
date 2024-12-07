#include <stdio.h>

int main() {
    int num1, num2, quotient;

    printf("Enter two integers (numerator and denominator): ");
    scanf("%d %d", &num1, &num2);

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("%d\n", quotient);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}

