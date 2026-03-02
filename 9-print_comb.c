#include <stdio.h>

/**
 * Author: Patience Joseph
 * Program:
 * Winmingle Community C Training
 * Des:prints possible different combinations
 */

void print_combinations(int n)
{
	if (n > 29)
	{
		putchar(10);
		return;
	}

	if (n % 3 == 0)
	{
		putchar(48 + (n / 3));
	}
	else if (n % 3 == 1 && n < 27)
	{
		putchar(44);
	}
	else if (n % 3 == 2 && n < 28)
	{
		putchar(32);
	}

	print_combinations(n + 1);
}

int main(void) 
{
	print_combinations(0);
	return 0;
}
