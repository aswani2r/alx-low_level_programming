#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
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
