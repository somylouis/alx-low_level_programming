#include "main.h"

/**
 * print_most_numbers - looping and omiting base 2 and 4
 *
 * Return: success
 */
void print_ most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
