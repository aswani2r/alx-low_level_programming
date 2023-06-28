#include "main.h"
/**
 * print_last_digit  - prints the last digit of  a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */
int print_last_digit(int number) {
int last_digit = number % 10;
std::cout << "Last digit: " << last_digit << std::endl;
return last_digit;
}
int main() {
int number = 12345;
int last_digit = print_last_digit(number);
std::cout << "Returned last digit: " << last_digit << std::endl;
return 0;
}
