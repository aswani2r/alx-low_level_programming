#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 * Return: 1 if n is greater than zero
 *0 if n is zero
 *-1 if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+%d\n", n); /* print + and n */
return (1);
}
else if (n == 0)
{
printf("0%d\n", n); /* print 0 and n */
return (0);
}
else
{
printf("-%d\n", n); /* print - and n */
return (-1);
}
}
