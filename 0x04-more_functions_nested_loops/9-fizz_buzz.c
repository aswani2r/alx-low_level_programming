#include <stdio.h>

/**
 * main - prints the number from 1 to 100, followed by new line
 * but for multiples of three prints fizz instead
 * and for multiples of five prints buzz instead
 * Return always: 0 (success)
 */

void fizzBuzz() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    fizzBuzz();
    return 0;
}
