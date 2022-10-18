#include "main.h"

/**
 * print _last_digit - print the last disgit of a number
 *return: return value for last digist
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -1 * (x % 10);
		_putchar(y + '0');
		return (y);
	}
	else
	{
		y = x % 10;
		_putchar(y + '0');
		return (y);
	}
}
