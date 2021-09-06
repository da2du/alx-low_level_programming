#include "holberton.h"
#include "string.h"
/**
*print_rev - reverse print
*@s: the normal string
*/
void print_rev(char *s)
{
int ch = strlen(s);
while(ch != 0)
{
_putchar(*s+ch);
ch--;
}
}
