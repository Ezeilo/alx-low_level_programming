#include <stdio.h>
#include "main.h"

/**
 * print_square - prints square
 * @size: parameter
 * Return: nothing
 */

void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for (inc2 = 1; inc2 <= size; inc2++)
			{
			putchar('#');
		}
		putchar('\n');
	}
	}
	else
	{
		putchar('\n');
	}
}
