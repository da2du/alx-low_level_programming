#include "holberton.h"
/**
*print_sign - sends the return value to caller
*@n: sent from caller
*Return: 1 if the number is greater than zero 0 if it is 0 -1 if it is negative
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n == 0)
{
	_putchar(48);
	return (00);
}
else
{
	_putchar(45);
	return (-1);

}
}
