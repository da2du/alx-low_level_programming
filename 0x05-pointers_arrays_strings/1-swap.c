#include "holberton.h"
/**
*swap_int - it swaps two pointerf of value
*a: the pointer
*b: the pointer
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
