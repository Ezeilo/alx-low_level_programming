#include "main.h"

/**
 * print_last_digit - prints the last digit.
 * @n: passed argument
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int fred = n % 10;

	if (n < 0)
		fred = -1;
		_putchar(fred + '0');
	return (fred);
}
