#include "holberton.h"
#include <stdio.h>
/**
*print_array - prints the arrays passed by the main
*@a: the array thing pointed
*@n: the size of the array passed by the main
*/
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
printf("%d", *(a + i));
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");

}
