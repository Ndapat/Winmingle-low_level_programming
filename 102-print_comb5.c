#include <stdio.h>

/**
 * Author:Patience Joseph
 * Program:Winmmingle Community C Training
 * Des:prints possible combinations of two two digits
 */

void print_two_pairs(int a, int b)
{
	if (a > 98)
	{
		putchar(10);
		return;
	}

	putchar((a / 10) + 48);
	putchar((a % 10) + 48);

	putchar(32);

	putchar((b / 10) + 48);
	putchar((b % 10) + 48);

	if (a < 98 || b < 99)
	{
		putchar(44);
		putchar(32);
	}

	if (b < 99)
	{
		print_two_pairs(a, b + 1);
	}
	else
	{
		print_two_pairs(a + 1, a + 2);
	}
}

int main(void)
{
	print_two_pairs(0, 1);
	return 0;
}
