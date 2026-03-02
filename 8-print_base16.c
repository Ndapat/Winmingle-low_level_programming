#include <stdio.h>

/**
 * Author:Patience Joseph
 * Program:Winmingle Community C Training
 * Des:prints in base sixteen
 */

void print_hex(int n)
{
	if (n > 102)
	{
		putchar(10);
		return;
	}
	putchar(n);

	if (n == 57)
	{
		print_hex(97);
	}
	else
	{
		print_hex(n + 1);
	}
	putchar('\n');
}

int main(void)
{
	print_hex(48);
	return 0;
}
