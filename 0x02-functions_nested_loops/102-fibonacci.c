#include <stdio.h>
/**
 * main - prints the first 50 fibonacci
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, "j);
		}77
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
