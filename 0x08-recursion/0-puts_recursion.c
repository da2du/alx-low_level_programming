#include "main.h"
#include <stdio.h>
/**
*_puts_recursion - provides the passed string from main
*@s : the character from main
*Return : false
*/
void _puts_recursion(char *s)
{

int i = 0;
if (s[i] != '\0')
{
_putchar(s[i]);
i++;
_puts_recursion(s+1);
}
else{
_putchar('\n');
}
}
