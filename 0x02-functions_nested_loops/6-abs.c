#include "main.h"
#include <stdio.h>
/**
* _abs - Computes the absolute value of an integer
* @n: The number to be computed
* Return: Absolute value of number or zero
*/
int int_abs(int c) {
int abs_val = c * -1;
return abs_val;
}
int main() {
int num = -5;
int result = int_abs(num);
printf("The absolute value of %d is %d\n", num, result);
return 0;
}

