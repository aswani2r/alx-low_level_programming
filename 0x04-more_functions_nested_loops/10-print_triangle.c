#include "main.h"
/**
 * print_triangle - prints a triangle, followed by new line
 * @size: size of the triangle
 */
void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n');
    } else {
        int i, j;
        for (i = 0; i < size; i++) {
            for (j = 0; j <= i; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
