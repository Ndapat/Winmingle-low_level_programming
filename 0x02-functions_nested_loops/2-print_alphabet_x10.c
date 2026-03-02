#include "main.h"

/**
 * Author: Patience Joseph
 * Program: Winmingle Community C Training
 * Des: Prints ten times the alphabets in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;

	char letter;

	while (count < 10)
	{
		for ( letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		count++;
	}
}
