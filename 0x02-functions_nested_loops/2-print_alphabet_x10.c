#include "main.h"
/**
 * print_alphabet_x10-prints alphabet 10 times
 *
 * Return:Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int n = 1;

	for (n = 0 ; n < 10 ; n++)
	{
		for (i = 'a' ; i  <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
