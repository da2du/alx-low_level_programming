#include "holberton.h"
/**
*print_alphabet_x10 - prints alphabet 10 times
*
*Return: Always 0.
*/
void print_alphabet_x10(void);
void print_alphabet_x10(void)
{
int j;
char i = 'a';
for (j = 0; j < 10; j++)
{
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	i = 'a';
}
}

