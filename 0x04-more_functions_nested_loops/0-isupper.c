#include "holberton.h"

/**
* _isupper - Shows 1 if the input is a
* an uppercase character. otherwise, shows
* 0
*
* @c: Character in ASCII code
*
* Return: 1 for uppercase, 0 for others
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
