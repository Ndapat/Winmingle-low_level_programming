#include <stdio.h>

/**
 * Author: Patience Joseph
 * Progam:Winmingle Community C Training
 * Description:prints single digits of base ten
 */

void print_digits(char n)
{
	if (n > '9')
	{
		putchar('\n');
		return;
	}

	putchar(n);

	print_digits(n +1);
}

int main()
{
	print_digits('0');
	return 0;
}
