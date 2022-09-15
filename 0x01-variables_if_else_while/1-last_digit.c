#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main- prints the last digit of the random number stored in varaible n
 *
 * Return: aleways 0 is sucessful
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n , n % 10)
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else  if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n!=0)
		printf("and is less than 6 snd not 0\n");
	return (0);
}

