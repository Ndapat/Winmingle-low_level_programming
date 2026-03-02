#include <stdio.h>

/**
 * Author:Patience Joseph
 * Program:Winmingle Community C Training
 * Description:print alphabets in lowervase except q and e
 */


void print_alphabet(char c)
{
	if (c > 'z')
	{
		putchar('\n');
		return;
	}

	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	print_alphabet(c + 1);
}
int main()
{
	print_alphabet('a');
	return 0;
}
