#include <stdio.h>

int main() {
    char upperChar, lowerChar;

    printf("Enter an uppercase character: ");
    scanf("%c", &upperChar);

    lowerChar = upperChar + ('a' - 'A');

    printf("%c\n", lowerChar);

    return 0;
}
