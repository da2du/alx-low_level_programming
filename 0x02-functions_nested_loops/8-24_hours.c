#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h2;
	int m2;

	while (h <= 23)
	{
	while (m <= 59)
	{
	m2 = m % 10;
	h2 = h % 10;
	_putchar(h / 10 + '0');
	_putchar(h2 + '0');
	_putchar(':');
	_putchar(m / 10 + '0');
	_putchar(m2 + '0');
	m++;
	_putchar('\n');
	}
	h++;
	m = 0;
}
}
