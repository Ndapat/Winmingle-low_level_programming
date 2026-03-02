#include <stdio.h>

/**
 * Author:Patience Joseph
 * Program:Winmingle Community C Training
 * Des:prints possible different combinations
 */

void print_comb(int i, int j)
{
	if (i > 8)
	{
		putchar(10);
		return;
	}
	putchar(i + 48);
	putchar(j + 48);

	if (i < 8 || j < 9)
	{
		putchar(44);
		putchar(32);
	}

	if (j < 9)
	{
		print_comb(i, j + 1);
	}
	else
	{
		print_comb(i + 1, i + 2);
	}
}

int main(void)
{
	print_comb(0, 1);
	return 0;
}
