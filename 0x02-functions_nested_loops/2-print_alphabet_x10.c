#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * @jay - argument to be passed
 */
void print_alphabet_x10(void)
{
	int jay;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (jay  = 'a'; jay <= 'z'; jay++)
		{
			_putchar(jay);
		}
		_putchar('\n');
	}
}
