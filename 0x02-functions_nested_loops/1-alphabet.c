#include "holberton.h"
/**
*print_alphabet -  prints the alphabet in lowercase
*
*Return: Always 0 (Success)
*/

void print_alphabet(void);
void print_alphabet(void)

{
char i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
