#include <stdio.h>

/**
 *  * Author: Patience Joseph
 *   * Progam:Winmingle Community C Training
 *    * Description:prints single digits of base ten
 *     */

void print_digits(int n)
{
	if (n > 57)
	{
		putchar(10);
		return;
	}
	putchar(n);
	print_digits(n + 1);
}

int main()
{
	print_digits(48);
	return 0;
}
