#include <stdio.h>

/**
 * Author:Patience Joseph
 * Program:Winmingle Community C Training
 * Des:prints possible different combination in three digits
 */

void print_comb_3(int i, int j, int k)
{
	if (i > 7)
	{
		putchar(10);
		return;
	}

	putchar(i + 48);
	putchar(j + 48);
	putchar(k + 48);
	
	if (i < 7 || j < 8 || k < 9)
	{
		putchar(44);
		putchar(32);
	}

	if (k < 9)
	{
		print_comb_3(i, j, k + 1);
	}
	else if (j < 8)
	{
		print_comb_3(i, j + 1, j + 2);
	}
	else
	{
		print_comb_3(i + 1, i + 2, i + 3);
	}
}

int main(void)
{
	print_comb_3(0, 1, 2);
	return 0;
}

