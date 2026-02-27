#include <unistd.h>

/*
 * Author: Joseph Patience Fortune
 * Program:WinMingle Community C Training
 * Description: A C program that prints code without using printf or puts
 */

int main(void)
{
	//the code to be printed
	const char *quote ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	//calculate the length of the string
	size_t len = 59;
	//write file discriptor
	write(2, quote, len);
	return (1);
}
