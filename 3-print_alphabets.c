#include <stdio.h>

/**
 * Author: Patience Joseph
 * Program: Winmingle Community C Training
 * Description: Print in lowercase,then uppercase
 */

int main(void)
{
	char letter;
	for (letter ='a'; letter <='z'; letter++)
	{
		putchar(letter);
	}

	for (letter ='A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
