#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (success)
 */
long largestPrimeFactor(long number) {
    long i, largestFactor;

    while (number % 2 == 0) {
        largestFactor = 2;
        number = number / 2;
    }

    for (i = 3; i <= sqrt(number); i = i + 2) {
        while (number % i == 0) {
            largestFactor = i;
            number = number / i;
        }
    }
    if (number > 2) {
        largestFactor = number;
    }

    return largestFactor;
}

int main() {
    long number = 612852475143;
    long largestFactor = largestPrimeFactor(number);

    printf("The largest prime factor of %ld is %ld\n", number, largestFactor);

    return 0;
}
