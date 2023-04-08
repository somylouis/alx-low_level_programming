#include  "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the unsigned long int to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	while (mask != 0)
	{
		if ((n & mask) == mask)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
	if (flag == 0)
		_putchar('0');
}
