#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
int ld = n % 10;
if (n < 0)
ld *= -1;

_putchar('0' + ld);
return (ld);
}
