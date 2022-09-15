#include "main.h"

/**
 * print_last_digit - prints the last digit.
 * @n: passed argument
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int fred;

	if (n < 0)
		n = -n;
	fred  = n % 10;
		_putchar(fred + '0');
	return (n % 10);
}
