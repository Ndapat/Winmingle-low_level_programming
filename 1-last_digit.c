#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Patience Joseph
 * Program: Winmingle Community C Training
 * Description: program that prints last digit of a random number
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Last digit of %d is %d\n", n, last_digit);

	return (0);
}
