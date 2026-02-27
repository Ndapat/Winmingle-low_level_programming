#include <stdio.h>

/**
 * Author: Patience Joseph
 * Program:Winmingle Community C Training
 * Desc: lowercase in reverse order
 */

void print_reverse_alphabet(int n)
{
	if (n < 97)
	{
		putchar(1);
		return;
	}

	putchar(n);

	print_reverse_alphabet(n-1);
}

int main(void)
{
	print_reverse_alphabet(122);
	return 0;
}
